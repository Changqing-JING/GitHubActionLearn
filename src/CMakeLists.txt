
add_subdirectory(lib1)

aux_source_directory(${CMAKE_CURRENT_LIST_DIR} sourceFiles)

add_executable(${PROJECT_NAME} ${sourceFiles})