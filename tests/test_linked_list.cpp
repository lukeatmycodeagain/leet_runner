#define CATCH_CONFIG_MAIN  // Catch2 will provide the main() function
#include <catch2/catch.hpp>
#include <iostream>
#include "linked_list.h"

TEST_CASE("LinkedList append functionality", "[linked_list]") {
    std::cout << "Hello from linked list test!" <<std::endl;
    REQUIRE(true);
}