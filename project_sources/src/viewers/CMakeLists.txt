set(SOURCE_VIEWER_LIB ShortNameViewer.cpp FullNameViewer.cpp DescriptionViewer.cpp RecursiveFull.cpp StatusBarViewer.cpp)

add_library(viewers SHARED ${SOURCE_VIEWER_LIB})
target_include_directories(viewers PUBLIC ${HEADERS_VIEWER_DIR})
target_include_directories(viewers PUBLIC ${HEADERS_NOTE_DIR})
message("viewers packed")
