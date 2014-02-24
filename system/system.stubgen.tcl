cd D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/system/
if { [ catch { xload xmp system.xmp } result ] } {
  exit 10
}
xset hdl verilog
run stubgen
exit 0
