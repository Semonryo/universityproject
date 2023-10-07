#pragma once
#include <stdbool.h>

#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

/*
* @brief Âîçâîäèò ÷èñëî â êâàäðàò
* @param value_ : ×èñëî
* @return Êâàäðàò ÷èñëà
*/
unsigned long long Square(const long long value_);

#endif

/*
* @brief Функция поиска простого числа
*/
bool Prime(unsigned long long x);