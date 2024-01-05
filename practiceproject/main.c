#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main()
{
    unsigned int s;
    printf("matrix size = ");
    scanf_s("%du", &s);
    printf("%llu", revmat(s));
    return 0;
}