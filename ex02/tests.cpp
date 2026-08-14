#include "catch_amalgamated.hpp"

#include "RandomSource.hpp"
#include "Dice.hpp"

TEST_CASE("max = 0")
{
	FakeRandom rng(0);
	Dice die(rng);

	CHECK(die.roll() == 1);
}

TEST_CASE("max = 5")
{
	FakeRandom rng(5);
	Dice die(rng);

	CHECK(die.roll() == 6);
}
