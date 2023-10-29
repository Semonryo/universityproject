#include<stdio.h>
#include "Task.h"
#include "stdbool.h"

unsigned long long BullsAndCows(const unsigned int snumber_)
{
	unsigned int gnumber = 0;
	unsigned int bull = 0;
	unsigned int cow = 0;

	unsigned int s1 = snumber_ / 1000;
	unsigned int s2 = snumber_ / 100 % 10;
	unsigned int s3 = snumber_ / 10 % 10;
	unsigned int s4 = snumber_ % 10;

	unsigned int g1 = 0;
	unsigned int g2 = 0;
	unsigned int g3 = 0;
	unsigned int g4 = 0;

	while (true)
	{
		printf("Guess the number = ");
		scanf_s("%du", &gnumber);
		
		g1 = gnumber / 1000;
		g2 = gnumber / 100 % 10;
		g3 = gnumber / 10 % 10;
		g4 = gnumber % 10;

		if (gnumber == snumber_)
		{
			printf("You win! ");
			break;
		}
		
		if (g1 == s1)
			bull++;
		else if (g1 == s2 || g1 == s3 || g1 == s4)
			cow++;

		if (g2 == s2)
			bull++;
		else if (g2 == s1 || g2 == s3 || g2 == s4)
			cow++;

		if (g3 == s3)
			bull++;
		else if (g3 == s1 || g3 == s2 || g3 == s4)
			cow++;

		if (g4 == s4)
			bull++;
		else if (g4 == s1 || g4 == s2 || g4 == s3)
			cow++;

		printf("Bulls = %d, Cows = %d \n", bull, cow);
		
		bull = 0;
		cow = 0;
	}

	return gnumber;
}
