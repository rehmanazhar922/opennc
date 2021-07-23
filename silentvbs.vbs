Set oShell = CreateObject ("Wscript.Shell") 
Dim strArgs
strArgs = "cmd /c install.bat"
oShell.Run strArgs, 0, false