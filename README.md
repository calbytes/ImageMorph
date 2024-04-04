-Run this this to detect OS, build architecture, compiler setting
	> conan profile detect --force
	
-INSTALL dependencies into build
	$ conan install . --output-folder=build --build=missing

-BUILD
	WINDOWS:
	$ cmake .. -G "Visual Studio 17 2022" -DCMAKE_TOOLCHAIN_FILE="conan_toolchain.cmake" 
	$ cmake --build . --config Release
	
	MacOS:
	$ cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
	$ cmake --build .


