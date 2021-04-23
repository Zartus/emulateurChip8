cmake_minimum_required(VERSION 3.7)
project(chip8)

add_subdirectory(cpu/src)
include_directories(cpu/include)
include_directories(include)

add_executable(chip8 ./src/main.c)
target_link_libraries(chip8 cpu)