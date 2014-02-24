//-----------------------------------------------------------------------------
//-- (c) Copyright 2010 Xilinx, Inc. All rights reserved.
//--
//-- This file contains confidential and proprietary information
//-- of Xilinx, Inc. and is protected under U.S. and
//-- international copyright and other intellectual property
//-- laws.
//--
//-- DISCLAIMER
//-- This disclaimer is not a license and does not grant any
//-- rights to the materials distributed herewith. Except as
//-- otherwise provided in a valid license issued to you by
//-- Xilinx, and to the maximum extent permitted by applicable
//-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
//-- WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
//-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
//-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
//-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
//-- (2) Xilinx shall not be liable (whether in contract or tort,
//-- including negligence, or under any other theory of
//-- liability) for any loss or damage of any kind or nature
//-- related to, arising under or in connection with these
//-- materials, including for any direct, or any indirect,
//-- special, incidental, or consequential loss or damage
//-- (including loss of data, profits, goodwill, or any type of
//-- loss or damage suffered as a result of any action brought
//-- by a third party) even if such damage or loss was
//-- reasonably foreseeable or Xilinx had been advised of the
//-- possibility of the same.
//--
//-- CRITICAL APPLICATIONS
//-- Xilinx products are not designed or intended to be fail-
//-- safe, or for use in any application requiring fail-safe
//-- performance, such as life-support or safety devices or
//-- systems, Class III medical devices, nuclear facilities,
//-- applications related to the deployment of airbags, or any
//-- other applications that could lead to death, personal
//-- injury, or severe property or environmental damage
//-- (individually and collectively, "Critical
//-- Applications"). Customer assumes the sole risk and
//-- liability of any use of Xilinx products in Critical
//-- Applications, subject only to applicable laws and
//-- regulations governing limitations on product liability.
//--
//-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
//-- PART OF THIS FILE AT ALL TIMES.
//-----------------------------------------------------------------------------
//
// AXI Lite Slave
//
// Verilog-standard:  Verilog 2001
//--------------------------------------------------------------------------
//
// Structure:
//   led4_axi_lite
//
// LED 8bitを制御する
//--------------------------------------------------------------------------

`default_nettype none

module led4_axi_lite_slave #(
	parameter integer C_S_AXI_ADDR_WIDTH            = 32,
	parameter integer C_S_AXI_DATA_WIDTH            = 32
)(
	// System Signals
	input wire ACLK,
	input wire ARESETN,

	// Slave Interface Write Address Ports
	input  wire [C_S_AXI_ADDR_WIDTH-1:0]   S_AXI_AWADDR,
	input  wire [3-1:0]                    S_AXI_AWPROT,
	input  wire                            S_AXI_AWVALID,
	output wire                            S_AXI_AWREADY,

	// Slave Interface Write Data Ports
	input  wire [C_S_AXI_DATA_WIDTH-1:0]   S_AXI_WDATA,
	input  wire [C_S_AXI_DATA_WIDTH/8-1:0] S_AXI_WSTRB,
	input  wire                            S_AXI_WVALID,
	output wire                            S_AXI_WREADY,

	// Slave Interface Write Response Ports
	output wire [2-1:0]                    S_AXI_BRESP,
	output wire                            S_AXI_BVALID,
	input  wire                            S_AXI_BREADY,

	// Slave Interface Read Address Ports
	input  wire [C_S_AXI_ADDR_WIDTH-1:0]   S_AXI_ARADDR,
	input  wire [3-1:0]                    S_AXI_ARPROT,
	input  wire                            S_AXI_ARVALID,
	output wire                            S_AXI_ARREADY,

	// Slave Interface Read Data Ports
	output wire [C_S_AXI_DATA_WIDTH-1:0]   S_AXI_RDATA,
	output wire [2-1:0]                    S_AXI_RRESP,
	output wire                            S_AXI_RVALID,
	input  wire                            S_AXI_RREADY,

    // User Signals
    output  wire    [3:0]                  LED4bit
);

	// Dedfine RESP
	parameter	RESP_OKAY =		2'b00;
	parameter	RESP_EXOKAY =	2'b01;
	parameter	RESP_SLVERR = 	2'b10;
	parameter	RESP_DECERR =	2'b11;

	// Write Address Transaction State Machine
	parameter	IDLE_WR =			2'b00,	// for wrt_cs
				DATA_WRITE_HOLD =	2'b01,
				BREADY_ASSERT =		2'b11;
	reg		[1:0]	wrt_cs = IDLE_WR;

	// Read Transaction State Machine
	parameter	IDLE_RD	=		1'b0,	//  for rdt_cs
 				RDATA_WAIT =	1'b1;
	reg			rdt_cs = IDLE_RD;

	// Registers
	reg		[31:0]	Commannd_Register;
	reg		[31:0]	Counter_Load_Register;
	reg		[31:0]	LED_Interval_Resgister;

	// Counter
	reg		[3:0]	LED_Display_Counter;
	reg		[31:0]	LED_Interval_Counter;

	reg		awready = 1'b1;
	reg		bvalid = 1'b0;
	reg		arready = 1'b1;
	reg		rvalid = 1'b0;
    reg     [C_S_AXI_DATA_WIDTH-1:0]    rdata;
    reg		[C_S_AXI_ADDR_WIDTH-1:0]	awaddr_hold;
    reg		wready;

	//// Write Transaction
	// AXI4 Lite Slave Write Transaction State Machine (Address, Response)
	always @(posedge ACLK) begin : proc_Write_Tran_SM
		if (~ARESETN) begin
			wrt_cs <= IDLE_WR;
			awready <= 1'b1;
			bvalid <= 1'b0;
			awaddr_hold <= 0;
			wready <= 1'b0;
		end else begin
			case (wrt_cs)
				IDLE_WR :
					if (S_AXI_AWVALID) begin	// Write Transaction Start
						wrt_cs <= DATA_WRITE_HOLD;
						awready <= 1'b0;
						awaddr_hold <= S_AXI_AWADDR;
						wready <= 1'b1;
					end
				DATA_WRITE_HOLD :
					if (S_AXI_WVALID) begin	// Write data just valid
						wrt_cs <= BREADY_ASSERT;
						bvalid <= 1'b1;
						wready <= 1'b0;
					end
				BREADY_ASSERT :
					if (S_AXI_BREADY) begin	// The write transaction was terminated.
						wrt_cs <= IDLE_WR;
						bvalid <= 1'b0;
						awready <= 1'b1;
					end
			endcase
		end
	end
	assign S_AXI_AWREADY = awready;
	assign S_AXI_BVALID = bvalid;
	assign S_AXI_BRESP = RESP_OKAY;
	assign S_AXI_WREADY = wready;

	//// Read Transaction
	// AXI4 Lite Slave Read Transaction State Machine
	always @(posedge ACLK) begin : proc_Read_Tran_SM
		if (~ARESETN) begin
			rdt_cs <= IDLE_RD;
			arready <= 1'b1;
			rvalid <= 1'b0;
		end else begin
			case (rdt_cs)
				IDLE_RD :
					if (S_AXI_ARVALID) begin
						rdt_cs <= RDATA_WAIT;
						arready <= 1'b0;
						rvalid <= 1'b1;
					end
				RDATA_WAIT :
					if (S_AXI_RREADY) begin
						rdt_cs <= IDLE_RD;
						arready <= 1'b1;
						rvalid <= 1'b0;
					end
			endcase
		end
	end
	assign S_AXI_ARREADY = arready;
	assign S_AXI_RVALID = rvalid;
	assign S_AXI_RRESP = RESP_OKAY;

	// S_AXI_RDATA
	always @(posedge ACLK) begin : proc_RDATA
	   if(~ARESETN) begin
			rdata <= 32'd0;
	   end else if (S_AXI_ARVALID) begin
			case (S_AXI_ARADDR[3:0])
				4'h0 : rdata <= Commannd_Register;
				4'h4 : rdata <= Counter_Load_Register;
				4'h8 : rdata <= {24'd0, LED_Display_Counter};
				4'hC : rdata <= LED_Interval_Resgister;
			endcase
	   end
	end
    assign S_AXI_RDATA = rdata;

	//// Registeres
	// Commannd_Register
	// offset 0： Command Register（R/W）
	// bit0： 1 - LED counter is incrimented,　
	//		 0 - LED counter is not incrimented　（default 0）
	// bit31～1：Reserved
	always @(posedge ACLK) begin : proc_Commannd_Register
	   if(~ARESETN) begin
			Commannd_Register <= 32'd0;
	   end else begin
			if (S_AXI_WVALID==1'b1 && wready==1'b1 && awaddr_hold[3:0]==4'h0)
				Commannd_Register[0] <= S_AXI_WDATA[0];
	   end
	end

	// Counter_Load_Register
	// offset 4：LED Counter Load Register（R/W）
	//　bit3～0 ： LED counter is loaded
	//　bit31～8： Reserved(Read value is all 0)
	always @(posedge ACLK) begin : proc_Counter_Load_Register
	   if(~ARESETN) begin
			Counter_Load_Register <= 32'd0;
	   end else begin
			if (S_AXI_WVALID==1'b1 && wready==1'b1 && awaddr_hold[3:0]==4'h4)
				Counter_Load_Register[3:0] <= S_AXI_WDATA[3:0];
	   end
	end

	// LED_Interval_Resgister
	// offset C：LED Interval Register（R/W）,
	//　bit31～0： Setting of interval counter value for increment LED counter
	always @(posedge ACLK) begin : proc_LED_Interval_Resgister
	   if(~ARESETN) begin
			LED_Interval_Resgister <= 32'd0;
	   end else begin
			if (S_AXI_WVALID==1'b1 && wready==1'b1 && awaddr_hold[3:0]==4'hC)
				LED_Interval_Resgister <= S_AXI_WDATA;
	   end
	end

	//// Conteres
	// LED_Display_Counter
	always @(posedge ACLK) begin : proc_LED_Display_Counter
	   if(~ARESETN) begin
			LED_Display_Counter <= 8'd0;
	   end else begin
	  		if (S_AXI_WVALID==1'b1 && wready==1'b1 && awaddr_hold[3:0]==4'h4) // Counter Load
	  			LED_Display_Counter <= S_AXI_WDATA[7:0];
	   		else if (Commannd_Register[0]) begin // Enable
				if (LED_Interval_Counter == 32'd0)
					LED_Display_Counter <= LED_Display_Counter + 8'd1;
			end
	   end
	end
    assign LED4bit = LED_Display_Counter;

	// LED_Interval_Counter
	always @(posedge ACLK) begin : proc_LED_Interval_Counter
	   if(~ARESETN) begin
			LED_Interval_Counter <= 32'd0;
	   end else begin
			if (Commannd_Register[0]) begin // Enable
				if (LED_Interval_Counter == 32'd0)
					LED_Interval_Counter <= LED_Interval_Resgister;
				else
					LED_Interval_Counter <= LED_Interval_Counter - 32'd1;
			end else
				LED_Interval_Counter <= LED_Interval_Resgister;
	   end
	end
endmodule

`default_nettype wire