#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "factorial.h"
#include "fonction42.h"
#include "operators.h"


TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE( "La fonction 42 est executée", "[fonction42]" ) {
    REQUIRE( fonction42() == 42 );
}

TEST_CASE( "La fonction 43 est executée", "[fonction43]" ) {
    REQUIRE( fonction42() == 43 );
}

TEST_CASE( "La fonction addition est executée", "[addition]" ) {
    REQUIRE( operator(1, 2) == 3 );
    REQUIRE( operator(10, 20) == 30 );
}

TEST_CASE( "La fonction difference est executée", "[difference]" ) {
    REQUIRE( operator(4, 2) == 2 );
    REQUIRE( operator(10, 20) == -10 );
}
