cmake_minimum_required(VERSION 3.28.0)

project(ImageMorph VERSION 1.0.0)

set(EXE_NAME morph)

add_executable(${EXE_NAME} src/test.cpp)

target_sources(${EXE_NAME} PRIVATE
    src/test.cpp)