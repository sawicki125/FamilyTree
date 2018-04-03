cmake_minimum_required(VERSION 3.7)
project(FamilyTree)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp FamilyTree.cpp FamilyTree.hpp)
add_executable(FamilyTree ${SOURCE_FILES})