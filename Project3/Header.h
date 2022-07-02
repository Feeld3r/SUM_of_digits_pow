#ifndef PRACT_SUM
#define PRACT_SUM

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/**
* ќтриманн€ року, м≥с€ц€ випуску та номеру парт≥њ з сер≥йного номеру
* @param x - число которое будет в степени
* @param st - степень числа x
* @return sum - сумма чисел числа
*/
long long sum_digits(int x, int st);


/**
* ќчищение строки от знаков после символа '\0'
* @return 1 - корректна€ работа
*/
int clean_stdin();

#endif // !PRACT_SUM

