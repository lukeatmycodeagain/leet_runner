# src/CMakeLists.txt
add_subdirectory(modules)
add_subdirectory(problems)

# Add the main executable
add_executable(leetcode_runner main.cpp ProblemManager.cpp)

target_include_directories(leetcode_runner
    PUBLIC 
        ${CMAKE_SOURCE_DIR}/src 
        ${CMAKE_SOURCE_DIR}/src/problems 
        ${CMAKE_SOURCE_DIR}/include)
# Link libraries from modules
target_link_libraries(leetcode_runner PUBLIC problems data_structures algorithms)
