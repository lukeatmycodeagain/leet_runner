#define CATCH_CONFIG_MAIN
#include <catch2/catch_test_macros.hpp>

#include <iostream>
#include "LinkedList.h"

TEST_CASE("LinkedList append functionality", "[LinkedList]") {
    std::cout << "Hello from linked list test!" <<std::endl;
    REQUIRE(true);
}