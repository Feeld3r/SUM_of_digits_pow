#ifndef PRACT_SUM
#define PRACT_SUM

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


long long sum_digits(int x, int st);

/**
* Очищение строки от знаков после символа '\0'
* @return 1 - корректная работа
*/
int clean_stdin();

#endif // !PRACT_SUM

