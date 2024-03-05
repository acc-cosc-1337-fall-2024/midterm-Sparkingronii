#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"
#include<iostream>
#include<string>
using std::string;
using std::swap;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
 TEST_CASE("Verify Integer to Hexadecimal")
 {
	REQUIRE(dec_to_hex (10) == "A");
	REQUIRE(dec_to_hex (170) == "AA");
	REQUIRE(dec_to_hex (255) == "FF");
 }