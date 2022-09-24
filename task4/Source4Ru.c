#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
Написать программу, которая:
по данному целому беззнаковому числу вычисляет ближайшее целое,
кратное данной степени числа 2 и при этом не превосходящее данное число.
Например, для числа 63 ближайшее целое, кратное 8 и не превышающее 63 равно 32.
*/

int main(void) {
	setlocale(LC_ALL, "Rus");

	unsigned int i = 0, j = 0;
	printf("Введите число: \n");
	scanf("%d", &i);
	printf("Введите кратность: \n");
	scanf("%d", &j);

	bool flag = true;
	while(flag) {
		if (i % 8 == 0 && (i & (i - 1)) == 0) {
			printf("%d", i);
			flag = false;
		}
		i--;
	}
}
