# data_structures/CMakeLists.txt
add_library(data_structures LinkedList.cpp)

# Include directories for this module
target_include_directories(data_structures PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
