cmake_minimum_required(VERSION 3.10.2)

enable_testing()
project(tic_tac_toe)

include_directories(src)
add_subdirectory(src)
add_subdirectory(tests)