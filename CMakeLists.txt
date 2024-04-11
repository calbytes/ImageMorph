cmake_minimum_required(VERSION 3.27)

project(ImageMorph LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(fmt CONFIG REQUIRED)

add_executable(${PROJECT_NAME} src/test.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt)
