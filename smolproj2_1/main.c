#include <stdio.h>
#include <stdbool.h>
#include "math.h"
#include "eyler.h"

int main()
{
    /*unsigned int quan = 0;
    printf("Quantity of numbers = ");
    scanf_s("%du", &quan);

    printf("%llu", Problem_6(quan));*/

    unsigned int number = 0;
    printf("Prime number = ");
    scanf_s("%du", &number);

    printf("%llu", Problem_7(number));
}