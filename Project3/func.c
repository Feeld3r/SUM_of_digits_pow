#include "Header.h"

int clean_stdin() {
	while (getchar() != '\n');
	return 1;
}

int sum_digits(int x, int st) {
	char c[500] = "\0";
	char* ptr1 = &c[0];
	char mass[500] = "\0";
	char* ptr2 = &mass[0];
	long double ch = pow(x, st);
	char n;
	int n1;
	int sum = 0;
	sprintf(ptr1, "%lf", ch);
	int l = strlen(c) - 7;
	strncat(ptr2, ptr1, sizeof(char) * l);
	mass[l + 1] = '\0';
	for (int i = 0; i < l; i++) {
		n = mass[i];
		char* t = &n;
		n1 = atoi(t);
		sum += n1;
	}
	return sum;
}