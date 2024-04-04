cmake_minimum_required(VERSION 3.28.0)

project(ImageMorph VERSION 1.0.0)

find_package(GTest REQUIRED)

add_executable(${PROJECT_NAME} src/test.cpp)

target_sources(${PROJECT_NAME} PRIVATE
    src/test.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE 
    gtest::gtest)
