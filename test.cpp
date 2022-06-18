#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

TEST_CASE ("test") {

    REQUIRE(g1("smartlms") == "7a2e6ee2b4cdb99b1e7f8fc00a719583");

}