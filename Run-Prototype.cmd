@echo off
setlocal
set "MODERNGEKKO_STATICRECOMP=1"
cd /d "%~dp0native-port\bin"
moderngekko-run.exe --game "%~dp0disc" --module "%~dp0native-port\bin\gGXSE8P_recomp.dll" --user-dir "%~dp0native-port\runtime-user" --graphics Vulkan
if errorlevel 1 pause
