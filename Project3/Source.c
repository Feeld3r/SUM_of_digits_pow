

#include "Header.h"
int main() {
	setlocale(LC_ALL, "Rus");
	int mass[25] = { 0 };
	int* ptr = &mass;
	int x, st;
	char c = '\n';
	do {
		printf("¬ведите число: ");
	} while ((scanf("%d%c", &x, &c) != 2 || c != '\n') && clean_stdin());
	do {
		printf("¬ведите степень дл€ этого числа: ");
	} while ((scanf("%d%c", &st, &c) != 2 || c != '\n') && clean_stdin());
	printf(" %d в степени %d = %.lf \n",x,st, pow(x, st));
	printf(" —умма цифр данного числа равна: %d \n", sum_digits(x, st));
	return 0;
}
