set CURDIR=%~dp0
set SRCDIR=%CURDIR%..\..\wxWidgets

pushd "%SRCDIR%\build\msw"
nmake /a /f makefile.vc TARGET_CPU=X64 clean
nmake /a /f makefile.vc TARGET_CPU=X64 BUILD=release clean
nmake /a /f makefile.vc TARGET_CPU=X64
nmake /a /f makefile.vc TARGET_CPU=X64 BUILD=release
popd
