# src/CMakeLists.txt
add_subdirectory(modules)
add_subdirectory(problems)

# Add the main executable
add_executable(leetcode_runner main.cpp problem_manager.cpp)

# Link libraries from modules
target_link_libraries(leetcode_runner data_structures algorithms)
