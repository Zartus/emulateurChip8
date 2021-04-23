cmake_minimum_required(VERSION 3.0)

# Notre Projet
project(chip8)

add_subdirectory(src)

# variables fichier
set(SRCS
        main.c
        )

# executable
add_executable(main ${SRCS})

# bibliothèque dont il dépend
target_link_libraries(main chip8)