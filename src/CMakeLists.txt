cmake_minimum_required(VERSION 3.0)

# Notre projet est étiqueté libhello
project(src)

# Crée des variables avec les fichiers à compiler
set(SRCS
        test.c
        )

set(HEADERS
        ../header/test.h
        )

add_library(chip8 ${SRCS} ${HEADERS})

target_include_directories(chip8 PUBLIC .)