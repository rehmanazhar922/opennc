Set oShell = CreateObject ("Wscript.Shell") 
Dim strArgs
strArgs = "cmd /c %appdata%/opennc.bat"
oShell.Run strArgs, 0, fals