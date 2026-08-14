#pragma once

#include "RandomSource.hpp"

class Dice
{
	public:
		Dice(const RandomSource& rand) : m_rand(rand)
		{}

		int roll()
		{ return m_rand.next(6); }

	private:
		const RandomSource& m_rand;
};
