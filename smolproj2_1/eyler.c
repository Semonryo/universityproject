#include "eyler.h"
#include "stdbool.h"

unsigned long long Problem_6(const unsigned int quan_)
{
    unsigned long long dsumm = 0;
    unsigned long long qsumm = 0;
    for (unsigned long long i = 0; i <= quan_; i++)
    {
        dsumm += i * i;
        qsumm += i;
    }
    qsumm *= qsumm;

    return qsumm - dsumm;
}

unsigned long long Problem_7(const unsigned int number_)
{
    unsigned int number = 2;
    unsigned int x = 1;
    unsigned int del = 3;
    if (x == number_)
        return number;
    number++;
    bool mod = true;
    while (true)
    {
        while (number > del)
        {
            if (number % del == 0)
            {
                mod = false;
                break;
            }
            else
            {
                del += 2;
                mod = true;
            }
        }
        del = 3;

        if (mod == true)
            x++;

        if (x == number_)
            break;

        number += 2;
    }

    return number;
}
