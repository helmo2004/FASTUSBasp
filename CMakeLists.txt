cmake_minimum_required(VERSION 3.5.1)

set(CMAKE_COLOR_MAKEFILE FALSE)

include(config.cmake)
set(CMAKE_TOOLCHAIN_FILE cmake/stm32-toolchain.cmake)

project(fastusbasp C CXX ASM)

add_subdirectory(src)
add_subdirectory(lib)
