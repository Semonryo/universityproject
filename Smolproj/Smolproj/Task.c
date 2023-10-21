#include "Task.h"
#include "stdbool.h"

unsigned long long BullsAndCows(const unsigned int snumber_)
{
	int snumber = snumber_;
	int gnumber = 0;
	int bull = 0;
	int cow = 0;

	while (true)
	{
		printf("Guess the number = ");
		scanf_s("%du", &gnumber);

		if (gnumber == snumber)
		{
			printf("You win! ");
			break;
		}
	}

	return gnumber;
}
