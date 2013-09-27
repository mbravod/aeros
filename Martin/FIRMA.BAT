cd D:\GITHUB\aeros\Martin\CER\New folder
D:
signtool sign /f MyCodeSigningCA.pfx /p MYPASSWORD2 /v /t http://timestamp.verisign.com/scripts/timestamp.dll "C:\sthie\launcher.exe"
signtool sign /f MyCodeSigningCA.pfx /p MYPASSWORD2 /v /t http://timestamp.verisign.com/scripts/timestamp.dll "C:\sthie\Rlauncher.exe"

PAUSE