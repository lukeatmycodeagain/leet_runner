# algorithms/CMakeLists.txt
add_library(algorithms sorting.cpp)

# Include directories for this module
target_include_directories(algorithms PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
