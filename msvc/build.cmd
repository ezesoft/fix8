cd msvc

msbuild /t:Rebuild /p:Configuration=Release;Platform=Win32 /m fix8-vc140.sln
msbuild /t:Rebuild /p:Configuration=Release;Platform=x64 /m fix8-vc140.sln
msbuild /t:Rebuild /p:Configuration=Debug;Platform=Win32 /m fix8-vc140.sln
msbuild /t:Rebuild /p:Configuration=Debug;Platform=x64 /m fix8-vc140.sln
