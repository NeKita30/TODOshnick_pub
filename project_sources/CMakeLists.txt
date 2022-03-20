cmake_minimum_required(VERSION 3.20)

project(Test_Project01
    DESCRIPTION "Testing Project class01")

set(HEADERS_NOTE_DIR ${PROJECT_SOURCE_DIR}/include/notes)

set(SOURCE_NOTE_DIR ${PROJECT_SOURCE_DIR}/src/notes)

add_executable(test_project01 ${PROJECT_SOURCE_DIR}/starts/test_project.cpp)

add_subdirectory(${PROJECT_SOURCE_DIR}/src/notes)

target_link_libraries(test_project01 PUBLIC notes)
