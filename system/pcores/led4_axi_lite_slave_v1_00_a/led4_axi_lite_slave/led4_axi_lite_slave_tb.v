`default_nettype none

`timescale 100ps / 1ps

// led4_axi_lite_slave_tb.v
// 2014/02/23
//

module led4_axi_lite_slave_tb;

	parameter DELAY	= 10;

	// Inputs
	wire ACLK;
	wire ARESETN;
	wire [31:0] S_AXI_AWADDR;
	wire [2:0] S_AXI_AWPROT;
	wire S_AXI_AWVALID;
	wire [31:0] S_AXI_WDATA;
	wire [3:0] S_AXI_WSTRB;
	wire S_AXI_WVALID;
	wire S_AXI_BREADY;
	wire [31:0] S_AXI_ARADDR;
	wire [2:0] S_AXI_ARPROT;
	wire S_AXI_ARVALID;
	wire S_AXI_RREADY;

	// Outputs
	wire S_AXI_AWREADY;
	wire S_AXI_WREADY;
	wire [1:0] S_AXI_BRESP;
	wire S_AXI_BVALID;
	wire S_AXI_ARREADY;
	wire [31:0] S_AXI_RDATA;
	wire [1:0] S_AXI_RRESP;
	wire S_AXI_RVALID;
	wire [3:0] LED4bit;

	// Instantiate the Unit Under Test (UUT)
	led4_axi_lite_slave uut (
		.ACLK(ACLK),
		.ARESETN(ARESETN),
		.S_AXI_AWADDR(S_AXI_AWADDR),
		.S_AXI_AWPROT(S_AXI_AWPROT),
		.S_AXI_AWVALID(S_AXI_AWVALID),
		.S_AXI_AWREADY(S_AXI_AWREADY),
		.S_AXI_WDATA(S_AXI_WDATA),
		.S_AXI_WSTRB(S_AXI_WSTRB),
		.S_AXI_WVALID(S_AXI_WVALID),
		.S_AXI_WREADY(S_AXI_WREADY),
		.S_AXI_BRESP(S_AXI_BRESP),
		.S_AXI_BVALID(S_AXI_BVALID),
		.S_AXI_BREADY(S_AXI_BREADY),
		.S_AXI_ARADDR(S_AXI_ARADDR),
		.S_AXI_ARPROT(S_AXI_ARPROT),
		.S_AXI_ARVALID(S_AXI_ARVALID),
		.S_AXI_ARREADY(S_AXI_ARREADY),
		.S_AXI_RDATA(S_AXI_RDATA),
		.S_AXI_RRESP(S_AXI_RRESP),
		.S_AXI_RVALID(S_AXI_RVALID),
		.S_AXI_RREADY(S_AXI_RREADY),
		.LED4bit(LED4bit)
	);

	// AXI4_Lite_Master_BFM
	AXI4_Lite_Master_BFM #(.DELAY(DELAY)) LMBFMi(
		.ACLK(ACLK),
		.S_AXI_AWADDR(S_AXI_AWADDR),
		.S_AXI_AWPROT(S_AXI_AWPROT),
		.S_AXI_AWVALID(S_AXI_AWVALID),
		.S_AXI_AWREADY(S_AXI_AWREADY),
		.S_AXI_WDATA(S_AXI_WDATA),
		.S_AXI_WSTRB(S_AXI_WSTRB),
		.S_AXI_WVALID(S_AXI_WVALID),
		.S_AXI_WREADY(S_AXI_WREADY),
		.S_AXI_BRESP(S_AXI_BRESP),
		.S_AXI_BVALID(S_AXI_BVALID),
		.S_AXI_BREADY(S_AXI_BREADY),
		.S_AXI_ARADDR(S_AXI_ARADDR),
		.S_AXI_ARPROT(S_AXI_ARPROT),
		.S_AXI_ARVALID(S_AXI_ARVALID),
		.S_AXI_ARREADY(S_AXI_ARREADY),
		.S_AXI_RDATA(S_AXI_RDATA),
		.S_AXI_RRESP(S_AXI_RRESP),
		.S_AXI_RVALID(S_AXI_RVALID),
		.S_AXI_RREADY(S_AXI_RREADY)
	);

	// test
	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		#1000;

		// Add stimulus here
		@(posedge ACLK);	// 次のクロックへ
		#DELAY;

		LMBFMi.AXI_LiteM_1Seq_Write(32'h4, 32'hA, 0, 0);	// led4bit = A, wait_clk_bready=0, wmax_wait=0
		LMBFMi.AXI_LiteM_1Seq_Write(32'hC, 32'h8, 1, 2);	// 8クロックでLEDが+1される, wait_clk_bready=1, wmax_wait=2
		LMBFMi.AXI_LiteM_1Seq_Write(32'h0, 32'h1, 2, 3);	// LED incriment Enable, wait_clk_bready=2, wmax_wait=3

		#1000;	// Wait 100 ns
		@(posedge ACLK);	// 次のクロックへ
		#DELAY;
		LMBFMi.AXI_LiteM_1Seq_Read(32'h0, 0);	// Command Register, rmax_wait=0
		LMBFMi.AXI_LiteM_1Seq_Read(32'h4, 1);	// LED Counter Load Register, rmax_wait=1
		LMBFMi.AXI_LiteM_1Seq_Read(32'h8, 2);	// LED Monitor Register, rmax_wait=2
		LMBFMi.AXI_LiteM_1Seq_Read(32'hC, 3);	// LED Interval Register, rmax_wait=3
	end

	// ACLK
	clk_gen #(
		.CLK_PERIOD(100),	// 10nsec, 100MHz
		.CLK_DUTY_CYCLE(0.5),
		.CLK_OFFSET(0),
		.START_STATE(1'b0)
	) ACLKi (
		.clk_out(ACLK)
	);

	// reset_gen
	reset_gen #(
		.RESET_STATE(1'b0),
		.RESET_TIME(1000)	// 100nsec
	) RESETi (
		.reset_out(ARESETN)
	);

endmodule

module clk_gen #(
	parameter 		CLK_PERIOD = 100,
    parameter real	CLK_DUTY_CYCLE = 0.5,
    parameter		CLK_OFFSET = 0,
	parameter		START_STATE	= 1'b0 )
(
	output	reg		clk_out
);
    begin
		initial begin
			#CLK_OFFSET;
			forever
			begin
				clk_out = START_STATE;
				#(CLK_PERIOD-(CLK_PERIOD*CLK_DUTY_CYCLE)) clk_out = ~START_STATE;
				#(CLK_PERIOD*CLK_DUTY_CYCLE);
			end
		end
    end
endmodule

module reset_gen #(
	parameter	RESET_STATE = 1'b1,
	parameter	RESET_TIME = 100 )
(
	output	reg		reset_out
);
	begin
		initial begin
			reset_out = RESET_STATE;
			#RESET_TIME;
			reset_out = ~RESET_STATE;
		end
	end
endmodule

`default_nettype wire
