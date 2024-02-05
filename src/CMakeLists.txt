project(shapes)

cmake_minimum_required(VERSION 3.28)

add_library(geometry STATIC geometry.cpp geometry.hpp)

add_executable(shapes main.cpp)
target_link_libraries(shapes geometry)