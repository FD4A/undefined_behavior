cmake_minimum_required (VERSION 2.6)

set(CMAKE_CXX_COMPILER "/usr/bin/clang++-14")
project (UB)
add_compile_options(-std=c++17 -Wall -Wextra -O2)
#add_compile_options(-fsanitize=undefined)

add_executable(UB_nullptr_01 UB_nullptr_01.cpp)
add_executable(UB_42 UB_42.cpp)
add_executable(UB_integeroverflow UB_integeroverflow.cpp)
add_executable(UB_virtual_01 UB_virtual_01.cpp)
add_executable(UB_array_01 UB_array_01.cpp)
add_executable(UB_aliasing UB_aliasing.cpp)
