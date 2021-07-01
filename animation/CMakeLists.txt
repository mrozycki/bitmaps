cmake_minimum_required(VERSION 3.10)

project(BitmapAnimation)
set(CMAKE_CXX_RELEASE_FLAGS -O3)
set(CMAKE_CXX_DEBUG_FLAGS -Og -g)

add_executable(animation
    canvas.cpp
    main.cpp)

set_property(TARGET animation PROPERTY CXX_STANDARD 20)