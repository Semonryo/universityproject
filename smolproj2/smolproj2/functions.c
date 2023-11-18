#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "functions.h"

unsigned int fgetline(char* line_, FILE* f_)
{
    return 0;
}

unsigned int my_strlen(const char* str_)
{
    unsigned int len = 0;

    while (str_[len] != '\0')
        ++len;

    return len;
}

char* my_strcpy(char* dest_, const char* src_)
{
    char* copy = dest_;
    while (*src_)
    {
        *copy = *src_;
        copy++;
        src_++;
    }

    *copy = '\0';

    return dest_;
}

char* my_strcat(char* dest_, const char* src_)
{
    while (*src_)
    {
        
    }
    
    return 0;
}

unsigned int my_strcmp(const char* str1_, const char* str2_)
{
    return 0;
}
