cmake_minimum_required(VERSION 3.10)

project(Windows-Hack)

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/bin")
set(LIBRARY_OUTPUT_PATH "${PROJECT_BINARY_DIR}/lib")


add_subdirectory(utils)

add_subdirectory(reflectiveDLLInjection)
