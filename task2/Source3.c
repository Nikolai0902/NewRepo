#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
�������� ���������, �������:
�� ���� ������ �������� ���������� �� �������� ������� �������, ������� ��� �� ������.�.
*/
int main(void) {

	int arr1[5];
	int arr2[5];

	printf("������� ������ ������� �������: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &arr1[i]); // &arr1[i] - ����� i-�� �������� �������
	}

	printf("������� ������ ������� �������: \n");
	for (int i = 0; i < 5; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d", &arr2[i]); // &arr2[i] - ����� i-�� �������� �������
	}

	printf("���������: \n");
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