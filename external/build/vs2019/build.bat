setlocal
set CURDIR=%~dp0
MSBuild "%CURDIR%..\..\wxWidgets\build\msw\wx_vc16.sln" /t:Build /p:Configuration=Release;Platform=x64
