set(SOURCE_NOTE_LIB Note.cpp Aspect.cpp Project.cpp Task.cpp Todo.cpp)

add_library(notes SHARED ${SOURCE_NOTE_LIB})
target_include_directories(notes PUBLIC ${HEADERS_NOTE_DIR})
message("notes packed")
