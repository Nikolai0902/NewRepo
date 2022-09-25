#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
Написать программу, которая:
включает функцию setbits(x, p, n, y), возвращающую значение x,
в котором n бит, начиная с p-ой позиции справа,
заменены на n правых разрядов из y (остальные биты не меняются).
*/

unsigned setbits(unsigned x, int p, int n, unsigned y);
int main() {

	setlocale(LC_ALL, "Rus");

	unsigned x = 61455; //1111 0000 0000 1111 -> результат 1111 0011 1100 1111 (62415)
	unsigned y = 65535; //1111 1111 1111 1111
	int p = 6;
	int n = 4;
	printf("%u\n", setbits(x, p, n, y)); 
	return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	// 1. Константа ~0 состоит из одних единиц, и ее сдвиг влево на n бит (~0 << p + n) приведет к тому, 
	// что правый край этой константы займут 10 нулевых разрядов. Получаем - 1111 1100 0000 0000.
	// 2. Еще раз выполним операцию NOT(~) получим в b - 0011 1111 1111 1111.
	
	int b = ~(~0 << (p + n));

	// 3. В следующей оперции нам нужно получить t -  0000 0011 1100 0000, которое при XOR(|) заменит требуемые
	// биты в исходном х.

	int f = y << p;
	int t = f & b;
	x = (x | t);

  return x;
}