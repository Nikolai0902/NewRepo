#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
Написать программу, которая:
выводит строку, изображающую десятичную запись числа, 
данного в двоичной системе счисления.
*/
int main(void) {

	setlocale(LC_ALL, "Rus");
 
    char q;
    int res = 0;
    printf("Введите число в двоичной системе счисления: \n");

    while (scanf("%c", &q) == 1) // цикл while перебирает введенное с консоли значение.
    {
        if (q != '0' && q != '1')
        {
                break;    
        }
        res = res * 2 + (q - '0'); 
    }
    printf("Результат: %i\n", res);

    return 0;
}