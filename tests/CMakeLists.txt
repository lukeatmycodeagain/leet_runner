# Add all test files to a list
set(TEST_SOURCES
    ${CMAKE_SOURCE_DIR}/tests/test_linked_list.cpp # Assuming all your test files are in the tests/ folder
)

# Create one test executable from all test sources
add_executable(run_tests ${TEST_SOURCES})

# Link Catch2 and other necessary libraries to the test executable
target_link_libraries(run_tests PRIVATE Catch2::Catch2 data_structures algorithms )


# Register the test executable with CTest (this will make it available to ctest)
add_test(NAME run_tests COMMAND run_tests)

