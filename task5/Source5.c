#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
�������� ���������, �������:
������� ������, ������������ ���������� ������ �����, 
������� � �������� ������� ���������.
*/
int main(void) {

	setlocale(LC_ALL, "Rus");
 
    char q;
    int res = 0;
    printf("������� ����� � �������� ������� ���������: \n");

    while (scanf("%c", &q) == 1) // ���� while ���������� ��������� � ������� ��������.
    {
        if (q != '0' && q != '1')
        {
                break;    
        }
        res = res * 2 + (q - '0'); 
    }
    printf("���������: %i\n", res);

    return 0;
}