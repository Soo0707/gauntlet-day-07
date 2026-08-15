#pragma once

#include <cstdlib>

struct RandomSource
{
	virtual ~RandomSource() = default;

	virtual int next(int max) const = 0;
};

class FakeRandom : public RandomSource
{
	public:
		FakeRandom(const int max) : m_max(max)
		{}

		virtual ~FakeRandom() = default;

		int next(int) const override
		{ return m_max + 1; }

	private:
		int m_max;
};
