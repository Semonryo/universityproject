#include "euler.h"

unsigned long long problem_1(const unsigned int number_, const unsigned int* multiples_, const unsigned int size_)
{
	unsigned long long sum = 0;

	for (unsigned int n = 0; n < number_; ++n)
	{
		for (unsigned int i = 0; i < size_; ++i)
		{
			if (n % multiples_[i] == 0)
			{
				sum += n;
				break; //continue
			}
		}
	}
	return sum;
}

unsigned long long Problem_2(const unsigned int number_)
{
	unsigned long long sum = 0;
	unsigned int n1 = 1;
	unsigned int n2 = 2;

	for (unsigned int i = 0; i < number_; i++)
	{
		if (n2 % 2 == 0)
			sum += n2;

		n2 += n1;
		n1 = n2 - n1;

		if (n2 >= number_)
			break;
	}

	return sum;
}

unsigned long long Problem_3(const unsigned int number_)
{
	for (unsigned int i = 1; i < number_; i++)
	{
		if (number_ % i == 0)
		{
			for (unsigned int n = 1; n <= i; n++)
			{

			}
		}
	}

	return 0;
}
