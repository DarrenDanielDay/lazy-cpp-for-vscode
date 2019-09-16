set basedir=%cd%
echo 当前路径为 %basedir%
echo %PATH% > originalpath.txt
setx /m PATH "%PATH%;%basedir%\.vscode\MinGW\bin;"
pause

