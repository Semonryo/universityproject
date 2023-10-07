#include <stdio.h>
#include "Functions.h"
#include "math.h"

unsigned long long Square(const long long value_)
{
	
	return value_ * value_;
}

bool Prime(unsigned long long x)
{
	if (x % 2 == 0)
		return false;

	for (unsigned int n = 3; n < sqrt((double)x) + 1; n += 2)
	{
		if (x % n == 0)
			return false;
	}

	return true;
}