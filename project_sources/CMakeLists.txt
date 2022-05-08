cmake_minimum_required(VERSION 3.20)

project(Test_Project01
    DESCRIPTION "Testing Project class01")

set(HEADERS_NOTE_DIR ${PROJECT_SOURCE_DIR}/include/notes)
set(HEADERS_VIEWER_DIR ${PROJECT_SOURCE_DIR}/include/viewers)
set(HEADERS_INTERFACE_DIR ${PROJECT_SOURCE_DIR}/include/interfaces)

set(SOURCE_NOTE_DIR ${PROJECT_SOURCE_DIR}/src/notes)
set(SOURCE_VIEWER_DIR ${PROJECT_SOURCE_DIR}/src/viewers)
set(SOURCE_INTERFACE_DIR ${PROJECT_SOURCE_DIR}/src/interfaces)

add_executable(test ${PROJECT_SOURCE_DIR}/starts/test_interfaces.cpp)

add_subdirectory(${SOURCE_NOTE_DIR})
add_subdirectory(${SOURCE_VIEWER_DIR})
add_subdirectory(${SOURCE_INTERFACE_DIR})

target_link_libraries(test PUBLIC notes)
target_link_libraries(test PUBLIC viewers)
target_link_libraries(test PUBLIC interfaces)
