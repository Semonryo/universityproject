#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "functions.h"

int main()
{
 /*   char str[] = "12345";
    printf("%d", my_strlen(str));*/

    /*char src[] = "12345";
    char dest[20];
    printf("%s", my_strcpy(dest, src));*/

    char src[] = "12345";
    char dest[20];
    printf_s("%s", &dest);
    printf("%s", my_strcat(dest, src));

    return 0;
}