cmake_minimum_required(VERSION 3.22)
project(X_O)

set(CMAKE_CXX_STANDARD 23)

enable_testing()
add_subdirectory(doctest)

add_executable(X_O main.cpp)

add_executable(X_O_src src/test.cpp)
target_link_libraries(X_O_src doctest)