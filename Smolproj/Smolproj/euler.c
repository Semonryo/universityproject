#include "euler.h"

unsigned long long Problem_1(const unsigned int number_, const unsigned int* multiples_, const unsigned int size_)
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
	unsigned long long divi = 0;
	for (unsigned int i = 2; i < number_; i++)
	{
		if (number_ % i == 0)
		{
			for (unsigned int n = 2; n <= i; n++)
			{
				if (i % n == 0 && i != n)
					break;

				if (i == n && i > divi)
					divi = n;
			}
		}
	}

	return divi;
}

unsigned long long Problem_4(const unsigned int key_)
{
	unsigned long long palin = 0;
	unsigned long long number = 0;
	for (unsigned int i = 100; i < 1000; i++)
	{
		for (unsigned int n = 100; n < 1000; n++)
		{
			number = n * i;
			unsigned long long a = number;
			unsigned long long multip = 0;
			unsigned long long res = 0;
			unsigned int c = 1;
			while (a / 10 != 0)
			{
				c = c * 10;
				a = a / 10;
			}
			a = number;
			unsigned long long b = 0;
			while (c != 0)
			{
				b = a % 10;
				a = a / 10;
				multip = b * c;
				res = res + multip;
				c = c / 10;
			}
			if (res == number && res > palin)
				palin = res;
		}
	}

	return palin;
}

