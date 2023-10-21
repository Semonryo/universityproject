#include "euler.h"
#include <stdbool.h>

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

unsigned long long Problem_3(const unsigned long long number_)
{
	unsigned long long number = number_;
	unsigned long long del = 2;

	while (number % 2 == 0)
		number /= 2;
	del++;

	while (del < number)
	{
		if (number % del == 0)
		{
			while (number % del == 0)
				number /= del;
		}
		del += 2;
	}

	return number;
}

unsigned long long Problem_4(const unsigned int low_, const unsigned int high_)
{
	unsigned long long palin = 0;
	unsigned long long number = 0;
	for (unsigned int i = low_; i <= high_; i++)
	{
		for (unsigned int n = low_; n <= high_; n++)
		{
			number = n * i;
			unsigned long long copy = number;
			unsigned long long multip = 0;
			unsigned long long revers = 0;
			unsigned int des = 1;

			while (copy / 10 != 0)
			{
				des *= 10;
				copy /= 10;
			}
			copy = number;
			unsigned long long ostcopy = 0;

			while (des != 0)
			{
				ostcopy = copy % 10;
				copy /= 10;
				multip = ostcopy * des;
				revers += multip;
				des /= 10;
			}
			if (revers == number && revers > palin)
				palin = revers;
		}
	}

	return palin;
}

unsigned long long Problem_5(const unsigned int mdel_)
{
	unsigned long long number = 1;
	unsigned int del = 0;
	
	while (true)
	{
		for (unsigned int i = 1; i <= mdel_; i++)
		{
			if (number % i == 0)
				del++;
			else
				break;
		}

		if (mdel_ == del)
			break;

		number++;
		del = 0;
	}

	return number;
}


