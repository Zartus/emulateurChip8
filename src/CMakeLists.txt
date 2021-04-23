cmake_minimum_required(VERSION 3.0)

project(src)

set(SRCS
        test.c
        )

set(HEADERS
        ../header/test.h
        )

add_library(chip8 ${SRCS} ${HEADERS})

target_include_directories(chip8 PUBLIC .)