@echo off

:: Create build directory
mkdir build

:: Change to build directory
cd build

:: Configure with CMake
cmake ..

:: Build project
cmake --build .

:: Set permission (if necessary, windows uses icacls as an example)
icacls .\*.* /grant:r Everyone:(R,W)

:: Run CTest tests
ctest