cmake_minimum_required(VERSION 3.10)

project(Windows-Hack)

set(CMAKE_CXX_STANDARD 14)

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/bin")
set(LIBRARY_OUTPUT_PATH "${PROJECT_BINARY_DIR}/lib")


option(ENABLE_UNIT_TEST "Whether to enable unit tests" ON)
if (ENABLE_UNIT_TEST)
    message(STATUS "Unit tests enabled")
    enable_testing()

    include(FetchContent)
    FetchContent_Declare(
            googletest
            GIT_REPOSITORY https://github.com/google/googletest.git
            GIT_TAG release-1.12.1
    )
    # For Windows: Prevent overriding the parent project's compiler/linker settings
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)
endif()


# libs
add_subdirectory(utils)

# modules
add_subdirectory(reflectiveDLLInjection)
