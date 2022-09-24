#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
Написать программу, которая:
по двум данным массивам определяет те элементы первого массива, которых нет во втором.».
*/
int main(void) {

	int arr1[5];
	int arr2[5];

	printf("Введите данные первого массива: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &arr1[i]); // &arr1[i] - адрес i-го элемента массива
	}

	printf("Введите данные второго массива: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &arr2[i]); // &arr2[i] - адрес i-го элемента массива
	}

	printf("Результат: \n");
	for (int i = 0; i < 5; i++) {
		bool flag = true;
		for (int j = 0; j < 5; j++) {
			if (arr1[i] == arr2[j]) {
				flag = false;
				break;
			}
		}
		if (flag == true) {
			printf("%d", arr1[i]);
		}
	}

	return 0;
}