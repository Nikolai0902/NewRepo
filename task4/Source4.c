#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
�������� ���������, �������:
�� ������� ������ ������������ ����� ��������� ��������� �����,
������� ������ ������� ����� 2 � ��� ���� �� ������������� ������ �����.
��������, ��� ����� 63 ��������� �����, ������� 8 � �� ����������� 63 ����� 32.
*/

int main(void) {
	setlocale(LC_ALL, "Rus");

	unsigned int i = 0, j = 0;
	printf("������� �����: \n");
	scanf("%d", &i);
	printf("������� ���������: \n");
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
