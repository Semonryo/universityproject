#include<stdio.h>
#include "Task.h"
#include "stdbool.h"

unsigned long long BullsAndCows(const unsigned int secret_)
{
	unsigned int secret = secret_;
	int sec[4];
	unsigned int guess = 0;
	int gue[4];
	unsigned int bull = 0;
	unsigned int cow = 0;

	for (unsigned int i = 0; i < 4; i++)
	{
		sec[i] = secret % 10;
		secret /= 10;
	}

	while (true)
	{
		printf("Guess the number = ");
		scanf_s("%du", &guess);

		for (unsigned int i = 0; i < 4; i++)
		{
			gue[i] = guess % 10;
			guess /= 10;
		}

		for (unsigned int i = 0; i < 4; i++)
		{
			for (unsigned int g = 0; g < 4; g++)
			{
				if (sec[i] == gue[g] && i == g)
					bull++;
				else if (sec[i] == gue[g] && i != g)
					cow++;
			}
		}

		if (bull == 4)
		{
			printf("You win! ");
			break;
		}
		else
			printf("Bulls = %d, Cows = %d \n", bull, cow);
		
		bull = 0;
		cow = 0;
	}

	return secret_;
}
