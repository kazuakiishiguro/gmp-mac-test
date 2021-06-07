cmake_minimum_required(VERSION 3.13)
project(MyGmp)
set(CMAKE_CXX_STANDARD 11)
add_executable(MyGMP main.cpp)
include_directories("/usr/local/include")
include_directories("/usr/local/lib")

target_link_libraries(MyGMP "/usr/local/lib/libgmp.a")
target_link_libraries(MyGMP "/usr/local/lib/libgmpxx.a")
