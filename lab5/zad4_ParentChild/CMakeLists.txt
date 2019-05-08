cmake_minimum_required(VERSION 3.13)
project(zad4_ParentChild)

set(CMAKE_CXX_STANDARD 14)

add_executable(zad4_ParentChild main.cpp Child.cpp Child.h Parent.cpp Parent.h)