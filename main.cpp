#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "DoubleCircularList.h"

TEST_CASE( "DCL", "[dcl]" ) {
    Job J(1,2,3);
    REQUIRE(J.toString() == "[1 2 3]");
}