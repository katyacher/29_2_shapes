cmake_minimum_required(VERSION 3.5.0)
project(29_2_shapes VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(29_2_shapes main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
