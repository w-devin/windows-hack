set(MODULE_NAME ReflectiveDLLInjection)

set(LIBS utils)
include_directories(
        "${CMAKE_SOURCE_DIR}/utils"
)

link_directories(
        "${PROJECT_BINARY_DIR}/lib"
)

aux_source_directory(. MODULE_SOURCE)

add_executable(${MODULE_NAME} ${MODULE_SOURCE})

target_link_libraries(${MODULE_NAME} ${LIBS})