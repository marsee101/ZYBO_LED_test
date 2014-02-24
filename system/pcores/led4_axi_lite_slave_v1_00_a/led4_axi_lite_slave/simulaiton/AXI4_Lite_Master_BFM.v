// AXI4 bus Lite Master Bus Fucntion Mode
// 2013/12/14
// AXI4_Master_BFM のラッパー
//
//

`default_nettype none

`timescale 100ps / 1ps

module AXI4_Lite_Master_BFM #(
    parameter DELAY = 10 )
(
    input   wire    ACLK,

    output wire [31:0] S_AXI_AWADDR,
    output wire [2:0] S_AXI_AWPROT,
    output wire S_AXI_AWVALID,
    output wire [31:0] S_AXI_WDATA,
    output wire [3:0] S_AXI_WSTRB,
    output wire S_AXI_WVALID,
    output wire S_AXI_BREADY,
    output wire [31:0] S_AXI_ARADDR,
    output wire [2:0] S_AXI_ARPROT,
    output wire S_AXI_ARVALID,
    output wire S_AXI_RREADY,

    input wire S_AXI_AWREADY,
    input wire S_AXI_WREADY,
    input wire [1:0] S_AXI_BRESP,
    input wire S_AXI_BVALID,
    input wire S_AXI_ARREADY,
    input wire [31:0] S_AXI_RDATA,
    input wire [1:0] S_AXI_RRESP,
    input wire S_AXI_RVALID
);

    parameter   ASIZE_BT_4  = 3'd2; // 32 bit width
    parameter   ASIZE_BT_2 = 3'd1;  // 16 bit width
    parameter   ASIZE_BT_1 = 3'd0;  // 8 bit width

    parameter   ABURST_FIXED    = 2'd0;
    parameter   ABURST_INCR = 2'd1;
    parameter   ABURST_WRAP = 2'd2;

    // RESP の値の定義
    parameter   RESP_OKAY =     2'b00;
    parameter   RESP_EXOKAY =   2'b01;
    parameter   RESP_SLVERR =   2'b10;
    parameter   RESP_DECERR =   2'b11;

    reg  [7:0]  awlen_hold = 0;
    reg  [0:0]  wid_hold = 0;
    reg  axi_w_transaction_active = 0;
    reg  axi_r_transaction_active = 0;
    reg  [7:0]  arlen_hold = 0;

    // AXI4_BFM のインスタンス
    AXI4_Master_BFM #(.DELAY(DELAY)) MBFMi(
        .ACLK(ACLK),
        .S_AXI_AWID(),
        .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_AWLEN(),
        .S_AXI_AWSIZE(),
        .S_AXI_AWBURST(),
        .S_AXI_AWLOCK(),
        .S_AXI_AWCACHE(),
        .S_AXI_AWPROT(S_AXI_AWPROT),
        .S_AXI_AWREGION(),
        .S_AXI_AWQOS(),
        .S_AXI_AWUSER(),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_WID(),
        .S_AXI_WDATA(S_AXI_WDATA),
        .S_AXI_WSTRB(S_AXI_WSTRB),
        .S_AXI_WLAST(),
        .S_AXI_WUSER(),
        .S_AXI_WVALID(S_AXI_WVALID),
        .S_AXI_WREADY(S_AXI_WREADY),
        .S_AXI_BID(1'b0),
        .S_AXI_BRESP(S_AXI_BRESP),
        .S_AXI_BUSER(1'b0),
        .S_AXI_BVALID(S_AXI_BVALID),
        .S_AXI_BREADY(S_AXI_BREADY),
        .S_AXI_ARID(),
        .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_ARLEN(),
        .S_AXI_ARSIZE(),
        .S_AXI_ARBURST(),
        .S_AXI_ARLOCK(),
        .S_AXI_ARCACHE(),
        .S_AXI_ARPROT(S_AXI_ARPROT),
        .S_AXI_ARREGION(),
        .S_AXI_ARQOS(),
        .S_AXI_ARUSER(),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_RID(1'b0),
        .S_AXI_RDATA(S_AXI_RDATA),
        .S_AXI_RRESP(S_AXI_RRESP),
        .S_AXI_RLAST(1'b1),
        .S_AXI_RUSER(1'b0),
        .S_AXI_RVALID(S_AXI_RVALID),
        .S_AXI_RREADY(S_AXI_RREADY)
    );

    // Write Channel
    // wait_clk_bready : 0 - bready の Wait は無し、0以外 - bready の Wait　は wait_clk_bready　の値の Wait が入る
    // wmax_wait : 0 - wvalid の Wait は無し、0以外 - wmax_wait を最大値とするランダムな値の Wait が　wvalid に入る
    task AXI_LiteM_1Seq_Write; // Write Address, Write Data, Write Response をシーケンシャルにオーバーラップせずに行う。
        input   [31:0]  awaddr;
        input   [31:0]  wdata;
        input   [7:0]   wait_clk_bready;
        input   [7:0]   wmax_wait;
        begin
            MBFMi.AXI_Master_1Seq_Write(1'b0, awaddr, 8'd0, ASIZE_BT_4, ABURST_INCR, wdata, wait_clk_bready, wmax_wait);
        end
    endtask

    // Write Address Channel
    task AXI_LiteM_WAC;
        input   [31:0]  awaddr;
        begin
            MBFMi.AXI_MASTER_WAC(1'b0, awaddr, 8'd0, ASIZE_BT_4, ABURST_INCR);
        end
    endtask

    // Write Data Channel
    // wmax_wait : 0 - wvalid の Wait は無し、0以外 - wmax_wait を最大値とするランダムな値の Wait が　wvalid に入る
    task AXI_LiteM_WDC;    // WDATA は+1する
    // とりあえず、WSTRBはオール1にする
        input   [31:0]  wdata;
        input   [7:0]   wmax_wait;  // Write時の最大wait数
        begin
            MBFMi.AXI_MASTER_WDC(wdata, wmax_wait);
        end
    endtask

    // Write Response Channel
    // wait_clk_bready : 0 - bready の Wait は無し、0以外 - bready の Wait　は wait_clk_bready　の値の Wait が入る
    task AXI_LiteM_WRC;    // wait_clk_bready
        input   [7:0]   wait_clk_bready;
        begin
            MBFMi.AXI_MASTER_WRC(wait_clk_bready);
        end
    endtask

    // Read Channel
    task AXI_LiteM_1Seq_Read; // Read Address, Read Data をシーケンシャルに行う。
        input   [31:0]  araddr;
        input   [7:0]   rmax_wait;  // Read時の最大wait数
        begin
            MBFMi.AXI_Master_1Seq_Read(1'b0, araddr, 8'd0, ASIZE_BT_4, ABURST_INCR);
        end
    endtask

    // Read Address Channel
    task AXI_LiteM_RAC;
        input   [31:0]  araddr;
        begin
            MBFMi.AXI_MASTER_RAC(1'b0, araddr, 8'd0, ASIZE_BT_4, ABURST_INCR);
        end
    endtask

    // Read Data Channel
    task AXI_LiteM_RDC; // S_AXI_RLAST がアサートされるまでS_AXI_RREADY をアサートする
        input   [7:0]   rmax_wait;  // Read時の最大wait数
        begin
            MBFMi.AXI_MASTER_RDC(rmax_wait);
        end
    endtask
endmodule

`default_nettype wire
