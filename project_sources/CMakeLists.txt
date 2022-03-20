cmake_minimum_required(VERSION 3.20)

project(Test_Note_Structure01
    DESCRIPTION "Control corret structure pack")

set(HEADERS_NOTE_DIR ${PROJECT_SOURCE_DIR}/include/notes)

set(SOURCE_NOTE_DIR ${PROJECT_SOURCE_DIR}/src/notes)

add_executable(test_note_structure01 ${PROJECT_SOURCE_DIR}/starts/test_note_structure.cpp)

add_subdirectory(${PROJECT_SOURCE_DIR}/src/notes)

target_link_libraries(test_note_structure01 PUBLIC notes)
