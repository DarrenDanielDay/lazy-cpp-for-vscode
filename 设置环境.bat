set basedir=%cd%
echo ��ǰ·��Ϊ %basedir%
echo %PATH% > originalpath.txt
setx /m PATH "%PATH%;%basedir%\.vscode\MinGW\bin;"
pause

