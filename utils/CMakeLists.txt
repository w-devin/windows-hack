set(MODULE_NAME utils)

aux_source_directory(. MODULE_SOURCE)

# remove *_test.*
list(REMOVE_ITEM MODULE_SOURCE "./Process_test.cpp")

add_library(${MODULE_NAME} STATIC EXCLUDE_FROM_ALL ${MODULE_SOURCE})

# unit tests
if (ENABLE_UNIT_TEST)
    enable_testing()
    include_directories(${GTEST_INCLUDE_DIRS})

    add_executable(Process_test Process_test.cpp ${MODULE_SOURCE})

    target_link_libraries(Process_test
            gtest
            gtest_main
            )

    include(GoogleTest)
    gtest_discover_tests(Process_test)
endif()