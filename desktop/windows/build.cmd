rem %comspec% /k "C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\Common7\Tools\VsDevCmd.bat"
rem SET VCTargetsPath=C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\Common7\IDE\VC\VCTargets

mkdir target
pushd target
cmake -G "Visual Studio 15 2017 Win64" ..
msbuild agd.sln
"debug\agd.exe"
popd
