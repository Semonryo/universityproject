#pragma once

/*
* @brief Найти сумму меньше number_, кратных multiples_
* @param number_ : Число, меньше которого ищется сумма
* @param multiples_ : Массив кратных
* @param size_ : Размер массива
* @return Сумма меньших и кратных
*/
unsigned long long Problem_1(const unsigned int number_,
	const unsigned int* multiples_,
	const unsigned int size_);

/*
* @brief Найти сумму всех чётных элементов ряда Фибоначчи, которые не превышают number_
* @param number_ : Количество элементов ряда Фибонначи
* @return Сумма чётных чисел
*/
unsigned long long Problem_2(const unsigned int number_);

/*
* @brief найти самый большой делитель числа number_, являющийся простым числом
* @param number_ : Число
* @return большой делитель, являющийся простым числом
*/
unsigned long long Problem_3(const unsigned int number_);

/*
* @brief Найти самый большой палиндром, полученный умножением двух трёхзначных чисел
* @param key_ : Запуск программы
* @return Наибольшой палиндром
*/
unsigned long long Problem_4(const unsigned int key_);