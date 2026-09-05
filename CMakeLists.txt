cmake_minimum_required(VERSION 4.3)
project(allan C)

set(CMAKE_C_STANDARD 11)

add_executable(allan main.c
        "ex 001 (media ponderada).cpp"
        ex002.c
        .vscode/ex002.h)
