#pragma once
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * @brief Считывает строку из файла
 * @param line_ : Строка куда считываем
 * @param f_ : Файл
 * @return Кол-во считываемых символов
*/
unsigned int fgetline(char* line_, FILE* f_);

// STRLEN, STRCPY, STRCAT, STRCMP, STRSTR

/**
 * @brief возвращает длину строки
 * @param str_ : строка
 * @return длина строки
*/
unsigned int my_strlen(const char* str_);

/**
 * @brief копирует строку из одного места в другое
 * @param dest_ : строка, куда копируют
 * @param src_ : исходная строка
 * @return 
*/
char* my_strcpy(char* dest_, const char* src_);

/**
 * @brief дописывает строку в конце
 * @param dest_ : строка, которую дописывают
 * @param src_ : строка, в которую дописывают
 * @return дописанная строка
*/
unsigned int my_strcat(char* dest_, const char* src_);

/**
 * @brief сравнивает длины двух строк
 * @param str1_ : первая строка
 * @param str2_ : вторая строка
 * @return 0, если строки одинаковы, полож., если 1-ый больше 2-ого, и отриц., если наоборот
*/
unsigned int my_strcmp(const char* str1_, const char* str2_);


unsigned int my_strstr();
