cmake_minimum_required(VERSION 2.8)

file(GLOB headers
        "*.hpp")


add_executable(DUMMY dummy.cpp ${headers})