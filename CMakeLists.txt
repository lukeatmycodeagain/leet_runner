cmake_minimum_required(VERSION 3.14)  # Required for FetchContent

project(LeetCodeRunner)

# Fetch Catch2 from GitHub
include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.8.0  # Or the latest tag you want to use
)
# FetchContent_MakeAvailable(Catch2)
FetchContent_MakeAvailable(Catch2)

# Add your source and test directories
add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(include)

# Enable testing
enable_testing()