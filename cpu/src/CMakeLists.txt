include_directories(../include)
FILE(GLOB MyCSources *.c)
add_library(cpu ${MyCSources})