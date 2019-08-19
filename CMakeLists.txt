cmake_minimum_required(VERSION 3.14)
project(chapter11)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter11 main.cpp)
add_executable(mytime2 Time2.cpp Time2.h mytime2.cpp)
add_executable(mytime3 Time3.cpp Time3.h mytime3.cpp)
add_executable(vector Vector.cpp Vector.h randwalk.cpp)
add_executable(stonewt stonewt.cpp stonewt.h stone.cpp)
add_executable(stonewt1 stonewt1.cpp stonewt1.h stone1.cpp)