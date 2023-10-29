#include<stdio.h>
#include"Functions.h"
#include"euler.h"
#include"Task.h"

#define SIZE 2

int main()
{
	
	/*unsigned int number = 0;
	printf("number = ");
	scanf_s("%du", &number);

	unsigned int multiples[size];
	printf("multiples = ");
	for (unsigned int i = 0; i < size; ++i)
		scanf_s("%du", &multiples[i]);

	printf("%llu ", problem_1(number, multiples, size));*/

	/*unsigned int number = 0;
	printf("number = ");
	scanf_s("%du", &number);

	printf("%llu ", problem_2(number));*/

	/*unsigned long long number = 0;
	printf("number = ");
	scanf_s("%llu", &number);

	printf("%llu ", problem_3(number));*/

	/*unsigned int low = 0;
	printf("low = ");
	scanf_s("%du", &low);

	unsigned int high = 0;
	printf("high = ");
	scanf_s("%du", &high);

	printf("%llu ", problem_4(low, high));*/

	/*unsigned int mdel = 0;
	printf("max divider = ");
	scanf_s("%du ", &mdel);

	printf("%llu ", problem_5(mdel));*/

	unsigned int secret = 0;
	printf("Secret number = ");
	scanf_s("%du", &secret);

	printf("%llu", BullsAndCows(secret));

	return 0;
}