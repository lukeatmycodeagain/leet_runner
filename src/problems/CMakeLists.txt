# Add all the problem source files
set(PROBLEM_SOURCES
    Problem1.cpp
    ProblemRegistry.cpp
    # Add additional problem files here
)

# Create a library for the problems
add_library(problems ${PROBLEM_SOURCES})

# Link the problems library to the main executable (if needed)
target_link_libraries(problems PUBLIC data_structures algorithms)

# Ensure the include directory is accessible to problem files
target_include_directories(problems PUBLIC ${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/include)