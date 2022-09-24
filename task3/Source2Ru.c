#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
Написать программу, которая:
по номеру года выводит его название в восточном календаре.
В восточном календаре принят 60-летний цикл, состоящий из 12-летних подциклов,
обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный.
В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца,
дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи.
Известно, что 1984 год был началом цикла — годом зеленой крысы.
*/
int main(void) {

	setlocale(LC_ALL, "Rus");

	int n;
	printf("Год:");
	scanf("%d", &n);
    printf("год ");


    // Определяем цвет года.
    // В зависимости от последнего числа года.
    switch ((n) % 10) {
    case 0:
    case 1:
        printf("бел");
        break;
    case 2:
    case 3:
        printf("черн");
        break;
    case 4:
    case 5:
        printf("зелён");
        break;
    case 6:
    case 7:
        printf("красн");
        break;
    case 8:
    case 9:
        printf("жёлт");
        break;
    }

    // Определяем род животкого.
    // Остаток от деления года на 12.
    switch (n % 12) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        printf("ой ");
        break;
    case 6:
    case 7:
    case 8:
        printf("ого ");
        break;
    }


    // Определяем вид животкого.
    // Животные повторяются каждые 12 лет.
    // Прибавляем 8 к году, чтобы остаток соответствовал виду животного.
    switch ((n + 8) % 12) {
    case 0:
        printf("крысы\n");
        break;
    case 1:
        printf("коровы\n");
        break;
    case 2:
        printf("тигра\n");
        break;
    case 3:
        printf("зайца\n");
        break;
    case 4:
        printf("дракона\n");
        break;
    case 5:
        printf("змеи\n");
        break;
    case 6:
        printf("лошади\n");
        break;
    case 7:
        printf("овцы\n");
        break;
    case 8:
        printf("обезьяны\n");
        break;
    case 9:
        printf("курицы\n");
        break;
    case 10:
        printf("собаки\n");
        break;
    case 11:
        printf("свиньи\n");
        break;
    }
}