cmake_minimum_required(VERSION 2.6)
project(libbeshell)

add_executable(libbeshell main.cpp)

install(TARGETS libbeshell RUNTIME DESTINATION bin)
