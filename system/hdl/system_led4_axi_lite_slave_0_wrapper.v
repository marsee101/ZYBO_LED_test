//-----------------------------------------------------------------------------
// system_led4_axi_lite_slave_0_wrapper.v
//-----------------------------------------------------------------------------

module system_led4_axi_lite_slave_0_wrapper
  (
    ACLK,
    ARESETN,
    S_AXI_AWADDR,
    S_AXI_AWPROT,
    S_AXI_AWVALID,
    S_AXI_AWREADY,
    S_AXI_WDATA,
    S_AXI_WSTRB,
    S_AXI_WVALID,
    S_AXI_WREADY,
    S_AXI_BRESP,
    S_AXI_BVALID,
    S_AXI_BREADY,
    S_AXI_ARADDR,
    S_AXI_ARPROT,
    S_AXI_ARVALID,
    S_AXI_ARREADY,
    S_AXI_RDATA,
    S_AXI_RRESP,
    S_AXI_RVALID,
    S_AXI_RREADY,
    LED4bit
  );
  input ACLK;
  input ARESETN;
  input [31:0] S_AXI_AWADDR;
  input [2:0] S_AXI_AWPROT;
  input S_AXI_AWVALID;
  output S_AXI_AWREADY;
  input [31:0] S_AXI_WDATA;
  input [3:0] S_AXI_WSTRB;
  input S_AXI_WVALID;
  output S_AXI_WREADY;
  output [1:0] S_AXI_BRESP;
  output S_AXI_BVALID;
  input S_AXI_BREADY;
  input [31:0] S_AXI_ARADDR;
  input [2:0] S_AXI_ARPROT;
  input S_AXI_ARVALID;
  output S_AXI_ARREADY;
  output [31:0] S_AXI_RDATA;
  output [1:0] S_AXI_RRESP;
  output S_AXI_RVALID;
  input S_AXI_RREADY;
  output [3:0] LED4bit;

  led4_axi_lite_slave
    #(
      .C_S_AXI_ADDR_WIDTH ( 32 ),
      .C_S_AXI_DATA_WIDTH ( 32 )
    )
    led4_axi_lite_slave_0 (
      .ACLK ( ACLK ),
      .ARESETN ( ARESETN ),
      .S_AXI_AWADDR ( S_AXI_AWADDR ),
      .S_AXI_AWPROT ( S_AXI_AWPROT ),
      .S_AXI_AWVALID ( S_AXI_AWVALID ),
      .S_AXI_AWREADY ( S_AXI_AWREADY ),
      .S_AXI_WDATA ( S_AXI_WDATA ),
      .S_AXI_WSTRB ( S_AXI_WSTRB ),
      .S_AXI_WVALID ( S_AXI_WVALID ),
      .S_AXI_WREADY ( S_AXI_WREADY ),
      .S_AXI_BRESP ( S_AXI_BRESP ),
      .S_AXI_BVALID ( S_AXI_BVALID ),
      .S_AXI_BREADY ( S_AXI_BREADY ),
      .S_AXI_ARADDR ( S_AXI_ARADDR ),
      .S_AXI_ARPROT ( S_AXI_ARPROT ),
      .S_AXI_ARVALID ( S_AXI_ARVALID ),
      .S_AXI_ARREADY ( S_AXI_ARREADY ),
      .S_AXI_RDATA ( S_AXI_RDATA ),
      .S_AXI_RRESP ( S_AXI_RRESP ),
      .S_AXI_RVALID ( S_AXI_RVALID ),
      .S_AXI_RREADY ( S_AXI_RREADY ),
      .LED4bit ( LED4bit )
    );

endmodule

