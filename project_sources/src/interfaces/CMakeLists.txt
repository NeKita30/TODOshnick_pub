set(SOURCE_NOTE_LIB Interface.cpp InteractiveRTInterface.cpp)

add_library(interfaces SHARED ${SOURCE_NOTE_LIB})
target_include_directories(interfaces PUBLIC ${HEADERS_NOTE_DIR})
target_include_directories(interfaces PUBLIC ${HEADERS_VIEWER_DIR})
target_include_directories(interfaces PUBLIC ${HEADERS_INTERFACE_DIR})
message("interfaces packed")
