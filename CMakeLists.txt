cmake_minimum_required(VERSION 3.27)

project(ImageMorph LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(OpenCV REQUIRED)

file(COPY ${CMAKE_SOURCE_DIR}/img/src/ 
    DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/img/src/)

set(EXE morph)
set(SRC_FILES 
    src/morph.cpp 
    src/imagereader.cpp 
    src/imagewriter.cpp
    src/morpher.cpp
    src/morphwrapper.cpp)

add_executable(${EXE} ${SRC_FILES})

target_include_directories(${EXE} PRIVATE ${CMAKE_SOURCE_DIR}/include)