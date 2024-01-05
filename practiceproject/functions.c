#include "functions.h"
#include <stdio.h>
#include "stdbool.h"

unsigned long long revmat(unsigned int s_)
{
    unsigned int A[50][50];
    printf("Write matrix numbers\n");
    for (unsigned int n = 0; n < s_; n++)
    {
        for (unsigned int m = 0; m < s_; m++)
        {
            scanf_s("%du", &A[n][m]);
        }
    }
    //ищем определитель матрицы
    unsigned int oprA = 0;
    int proizv = 1;
    //A11*A22*A33+a12*a23*a31+a13*a21*a32
    //a31*a22*a13-a32*a23*a11-a31*a21*a12
    int n = 0;
    int m = 0;
    int count = 0;
    while (true)
    {
        proizv *= A[n][m];
        n++;
        m++;
        if (n == s_)
        {
            oprA += proizv;
            n = 0;
            proizv = 1;
            count++;
            if (m = s_)
                m = n + 1;
        }
        if (m == s_)
        {
            m = 0;
        }
        if (count == s_)
            break;
    }
    return 0;
}

unsigned long long cramer(unsigned int n_)
{
    unsigned int A[50];
    return 0;
}
