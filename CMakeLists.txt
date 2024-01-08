cmake_minimum_required(VERSION 3.20)
project(GithubActionLearn)

enable_testing()

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_LIST_DIR})

add_subdirectory(src)