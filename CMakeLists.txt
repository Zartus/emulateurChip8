cmake_minimum_required(VERSION 3.1)
project(chip8)
include(CTest)
add_subdirectory(cpu/src)
include_directories(cpu/include)
include_directories(include)

add_executable(chip8 ./src/main.c)
target_compile_options (chip8 PRIVATE -Wall -Werror -pedantic -Wextra)
target_link_libraries(chip8 cpu)

find_package(SDL2 REQUIRED)

if (SDL2_FOUND)
    target_link_libraries(chip8 ${SDL2_LIBRARIES})
    include_directories(${SDL2_INCLUDE_DIRS})
else ()
    message(FATAL_ERROR "SDL2 not found")
endif ()