#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
�������� ���������, �������:
�� ��������� ����� � ��������� 100�999 ������� � ��������� �������� ������� �����,
�������� : 256 � ������� ��������� ������, 814 � ���������� �������������.
*/
int main(void) {

	setlocale(LC_ALL, "Rus");
	int i = 0;
	bool isT = true;

	printf("������� �����: \n");
	scanf("%d", &i);


	if (i >= 100 && i <= 999) {
		switch (i / 100)
		{
		case 1: printf("��� "); break;
		case 2: printf("������ "); break;
		case 3: printf("������ "); break;
		case 4: printf("��������� "); break;
		case 5: printf("������� "); break;
		case 6: printf("�������� "); break;
		case 7: printf("������� "); break;
		case 8: printf("��������� "); break;
		case 9: printf("��������� "); break;
		}

		switch ((i % 100) / 10)
		{
		case 2: printf("�������� "); break;
		case 3: printf("�������� "); break;
		case 4: printf("����� "); break;
		case 5: printf("�������� "); break;
		case 6: printf("���������� "); break;
		case 7: printf("��������� "); break;
		case 8: printf("���������� "); break;
		case 9: printf("��������� "); break;
		}

		if (i % 100 >= 10 & i % 100 < 20) {
			switch (i % 100) {
			case 10: printf("������"); break;
			case 11: printf("����������"); break;
			case 12: printf("����������"); break;
			case 13: printf("����������"); break;
			case 14: printf("������������"); break;
			case 15: printf("����������"); break;
			case 16: printf("�����������"); break;
			case 17: printf("����������"); break;
			case 18: printf("������������"); break;
			case 19:printf("������������"); break;
			}
		}
		else {
			switch (i % 10)
			{
			case 1: printf("����\n"); break;
			case 2: printf("���\n"); break;
			case 3: printf("���\n"); break;
			case 4: printf("������"); break;
			case 5: printf("����"); break;
			case 6: printf("�����"); break;
			case 7: printf("����"); break;
			case 8: printf("������"); break;
			case 9: printf("������"); break;
			}
		}

	}
	return 0;
}