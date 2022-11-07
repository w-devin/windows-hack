set(MODULE_NAME utils)

aux_source_directory(. MODULE_SOURCE)

add_library(${MODULE_NAME} STATIC EXCLUDE_FROM_ALL ${MODULE_SOURCE})