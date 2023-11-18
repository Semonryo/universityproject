#pragma once
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * @brief ��������� ������ �� �����
 * @param line_ : ������ ���� ���������
 * @param f_ : ����
 * @return ���-�� ����������� ��������
*/
unsigned int fgetline(char* line_, FILE* f_);

// STRLEN, STRCPY, STRCAT, STRCMP, STRSTR

/**
 * @brief ���������� ����� ������
 * @param str_ : ������
 * @return ����� ������
*/
unsigned int my_strlen(const char* str_);

/**
 * @brief �������� ������ �� ������ ����� � ������
 * @param dest_ : ������, ���� ��������
 * @param src_ : �������� ������
 * @return 
*/
char* my_strcpy(char* dest_, const char* src_);

/**
 * @brief ���������� ������ � �����
 * @param dest_ : ������, ������� ����������
 * @param src_ : ������, � ������� ����������
 * @return ���������� ������
*/
unsigned int my_strcat(char* dest_, const char* src_);

/**
 * @brief ���������� ����� ���� �����
 * @param str1_ : ������ ������
 * @param str2_ : ������ ������
 * @return 0, ���� ������ ���������, �����., ���� 1-�� ������ 2-���, � �����., ���� ��������
*/
unsigned int my_strcmp(const char* str1_, const char* str2_);


unsigned int my_strstr();
