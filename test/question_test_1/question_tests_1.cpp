#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"
#include<iostream>
#include<cmath>
using std::cin; using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test Get Primes")
{
	REQUIRE(get_primes(10)==2357);
	REQUIRE(get_primes(15)==23571113);
	REQUIRE(get_primes(30)==2357111317192329);
	//REQUIRE(get_primes(50)==23571113171923293137414347);
}