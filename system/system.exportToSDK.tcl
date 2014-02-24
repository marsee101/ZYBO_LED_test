proc exportToSDK {} {
  cd D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/system
  if { [ catch { xload xmp system.xmp } result ] } {
    exit 10
  }
  if { [run exporttosdk] != 0 } {
    return -1
  }
  return 0
}

if { [catch {exportToSDK} result] } {
  exit -1
}

set sExportDir [ xget sdk_export_dir ]
set sExportDir [ file join "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/system" "$sExportDir" "hw" ] 
if { [ file exists D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/edkBmmFile_bd.bmm ] } {
   puts "Copying placed bmm file D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/edkBmmFile_bd.bmm to $sExportDir" 
   file copy -force "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/edkBmmFile_bd.bmm" $sExportDir
}
if { [ file exists D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/system_top.bit ] } {
   puts "Copying bit file D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/system_top.bit to $sExportDir" 
   file copy -force "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/system_top.bit" $sExportDir
}
exit $result
