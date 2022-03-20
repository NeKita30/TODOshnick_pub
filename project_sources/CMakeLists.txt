cmake_minimum_required(VERSION 3.20)

project(Test_Task01
    DESCRIPTION "Testing Task class01")

set(HEADERS_NOTE_DIR ${PROJECT_SOURCE_DIR}/include/notes)

set(SOURCE_NOTE_DIR ${PROJECT_SOURCE_DIR}/src/notes)

add_executable(test_task01 ${PROJECT_SOURCE_DIR}/starts/test_task.cpp)

add_subdirectory(${PROJECT_SOURCE_DIR}/src/notes)

target_link_libraries(test_task01 PUBLIC notes)
