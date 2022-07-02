

#include "Header.h"
int main() {
	setlocale(LC_ALL, "Rus");
	int mass[25] = { 0 };
	int* ptr = &mass;
	int x, st;
	char c = '\n';
	do {
		printf("123");
		printf("¬ведите число: ");
	} while ((scanf("%d%c", &x, &c) != 2 || c != '\n') && clean_stdin());
	do {
		printf("¬ведите степень дл€ этого числа: ");
	} while ((scanf("%d%c", &st, &c) != 2 || c != '\n') && clean_stdin());
	printf("\n %lld", sum_digits(x, st));
	return 0;
}
