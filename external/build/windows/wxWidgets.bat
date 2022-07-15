set CURDIR=%~dp0
set SRCDIR=%CURDIR%..\..\wxWidgets

pushd "%SRCDIR%\build\msw"
nmake /a /f makefile.vc clean
nmake /a /f makefile.vc BUILD=release clean
nmake /a /f makefile.vc
nmake /a /f makefile.vc BUILD=release
popd
