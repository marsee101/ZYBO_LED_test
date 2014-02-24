//
// AXI Lite Master 用 AXI Slave Bus Fuction Model (BFM)
// axi_lite_slave_BFM.v
// AXI Master用 AXI Slave Bus Function Mode (BFM)へのラッパー
// 
// 2013/06/19 
//

`default_nettype none

module axi_lite_slave_BFM # (
    parameter integer C_M_AXI_ADDR_WIDTH = 32,
    parameter integer C_M_AXI_DATA_WIDTH = 32,
	parameter C_M_AXI_AxSIZE = 3'b010,		// 4バイト
	
	parameter integer C_OFFSET_WIDTH = 10,	// 割り当てるRAMのアドレスのビット幅
	
	parameter integer WRITE_RANDOM_WAIT = 0, // Write Transaction のデータ転送の時にランダムなWaitを発生させる=1, Waitしない=0
	parameter integer WR_BVALID_RANDOM_WAIT = 0, // Write Transaction の時のM_AXI_BVALID をランダムにWaitする=1, Waitしない=0
	parameter integer READ_RANDOM_WAIT = 0 // Read Transaction のデータ転送の時にランダムなWaitを発生させる=1, Waitしない=0
) (
    // System Signals
    input wire M_AXI_ACLK,
    input wire M_AXI_ARESETN,

    // Master Interface Write Address
    input wire [C_M_AXI_ADDR_WIDTH-1:0] M_AXI_AWADDR,
    input wire [3-1:0] M_AXI_AWPROT,
    input wire M_AXI_AWVALID,
    output wire M_AXI_AWREADY,

    // Master Interface Write Data
    input wire [C_M_AXI_DATA_WIDTH-1:0] M_AXI_WDATA,
    input wire [C_M_AXI_DATA_WIDTH/8-1:0] M_AXI_WSTRB,
    input wire M_AXI_WVALID,
    output wire M_AXI_WREADY,

    // Master Interface Write Response
    output wire [2-1:0] M_AXI_BRESP,
    output wire M_AXI_BVALID,
    input wire M_AXI_BREADY,

    // Master Interface Read Address
    input wire [C_M_AXI_ADDR_WIDTH-1:0] M_AXI_ARADDR,
    input wire [3-1:0] M_AXI_ARPROT,
    input wire M_AXI_ARVALID,
    output wire M_AXI_ARREADY,

    // Master Interface Read Data 
    input wire [C_M_AXI_DATA_WIDTH-1:0] M_AXI_RDATA,
    input wire [2-1:0] M_AXI_RRESP,
    input wire M_AXI_RVALID,
    output wire M_AXI_RREADY
);
	

	// Instantiate the Unit Under Test (UUT_slave)
	axi_slave_bfm #(
		.C_M_AXI_ADDR_WIDTH(C_M_AXI_ADDR_WIDTH),
		.C_M_AXI_DATA_WIDTH(C_M_AXI_DATA_WIDTH),
		.C_OFFSET_WIDTH(C_OFFSET_WIDTH),
		.C_M_AXI_BURST_LEN(1),
		.WRITE_RANDOM_WAIT(WRITE_RANDOM_WAIT),
		.WR_BVALID_RANDOM_WAIT(WR_BVALID_RANDOM_WAIT),
		.READ_RANDOM_WAIT(READ_RANDOM_WAIT)
	) axi_slave_bfm_i (
		.ACLK(M_AXI_ACLK), 
		.ARESETN(M_AXI_ARESETN), 
		.M_AXI_AWID(1'b0), 
		.M_AXI_AWADDR(M_AXI_AWADDR), 
		.M_AXI_AWLEN(8'd0),				// 1 Word
		.M_AXI_AWSIZE(C_M_AXI_AxSIZE), 
		.M_AXI_AWBURST(2'b01), 			// INCR　 （アドレスをインクリメント））
		.M_AXI_AWLOCK(1'b0),			// ノーマル・アクセス
		.M_AXI_AWCACHE(4'b0010), 		// Normal Non-cacheable Non-bufferable
		.M_AXI_AWPROT(M_AXI_AWPROT),
		.M_AXI_AWQOS(4'b0000),			// default
		.M_AXI_AWUSER(), 
		.M_AXI_AWVALID(M_AXI_AWVALID), 
		.M_AXI_AWREADY(M_AXI_AWREADY), 
		.M_AXI_WDATA(M_AXI_WDATA), 
		.M_AXI_WSTRB(M_AXI_WSTRB), 
		.M_AXI_WLAST(1'b1), 
		.M_AXI_WUSER(), 
		.M_AXI_WVALID(M_AXI_WVALID), 
		.M_AXI_WREADY(M_AXI_WREADY), 
		.M_AXI_BID(), 
		.M_AXI_BRESP(M_AXI_BRESP), 
		.M_AXI_BUSER(), 
		.M_AXI_BVALID(M_AXI_BVALID), 
		.M_AXI_BREADY(M_AXI_BREADY), 
		.M_AXI_ARID(1'b0), 
		.M_AXI_ARADDR(M_AXI_ARADDR), 
		.M_AXI_ARLEN(8'd0),				// 1 Word
		.M_AXI_ARSIZE(C_M_AXI_AxSIZE), 
		.M_AXI_ARBURST(2'b01), 			// INCR　 （アドレスをインクリメント） 
		.M_AXI_ARLOCK(2'b00),			// ノーマル・アクセス
		.M_AXI_ARCACHE(4'b0010), 		// Normal Non-cacheable Non-bufferable
		.M_AXI_ARPROT(M_AXI_ARPROT),
		.M_AXI_ARQOS(4'b0000),			// default
		.M_AXI_ARUSER(), 
		.M_AXI_ARVALID(M_AXI_ARVALID), 
		.M_AXI_ARREADY(M_AXI_ARREADY), 
		.M_AXI_RID(), 
		.M_AXI_RDATA(M_AXI_RDATA), 
		.M_AXI_RRESP(M_AXI_RRESP), 
		.M_AXI_RLAST(), 
		.M_AXI_RUSER(), 
		.M_AXI_RVALID(M_AXI_RVALID), 
		.M_AXI_RREADY(M_AXI_RREADY)
	);
endmodule

`default_nettype wire
