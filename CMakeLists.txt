cmake_minimum_required(VERSION 2.8.12)
project(CppCalculator)
 
add_definitions("-std=c++14")
 
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
 
add_executable(calculator Calculator.cpp)
target_link_libraries(calculator ${CONAN_LIBS})
