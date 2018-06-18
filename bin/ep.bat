reg add "HKCU\Software\Microsoft\Windows\CurrentVersion\Internet Settings" ^
    /v ProxyServer /t REG_SZ /d proxy_address:port /f
reg add "HKCU\Software\Microsoft\Windows\CurrentVersion\Internet Settings" ^
    /v ProxyEnable /t REG_DWORD /d 1 /f
start /d "C:\Program Files\Internet Explorer" IEXPLORE.EXE www.google.com
:: Sleep for 3 seconds,
set SleepTime=3
Timeout /T %SleepTime% /NoBreak>NUL
Cls & Color 0C
echo(
echo              Killing Internet Explorer Please wait for a while ...
Taskkill /IM "iexplore.exe" /F