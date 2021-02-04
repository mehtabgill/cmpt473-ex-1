cmake_minimum_required(VERSION 3.10)
project(google-test-exercise)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")

add_subdirectory(lib)
add_subdirectory(test)

