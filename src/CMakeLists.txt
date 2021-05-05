cmake_minimum_required(VERSION 3.12...3.20)

project(
    ruby
    VERSION 0.1
    DESCRIPTION "A PlayStation emulator written in C++"
    LANGUAGES CXX)

add_subdirectory(ruby)
add_subdirectory(app)
