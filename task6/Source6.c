#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

/*
�������� ���������, �������:
�������� ������� setbits(x, p, n, y), ������������ �������� x,
� ������� n ���, ������� � p-�� ������� ������,
�������� �� n ������ �������� �� y (��������� ���� �� ��������).
*/

unsigned setbits(unsigned x, int p, int n, unsigned y);
int main() {

	setlocale(LC_ALL, "Rus");

	unsigned x = 61455; //1111 0000 0000 1111 -> ��������� 1111 0011 1100 1111 (62415)
	unsigned y = 65535; //1111 1111 1111 1111
	int p = 6;
	int n = 4;
	printf("%u\n", setbits(x, p, n, y)); 
	return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	// 1. ��������� ~0 ������� �� ����� ������, � �� ����� ����� �� n ��� (~0 << p + n) �������� � ����, 
	// ��� ������ ���� ���� ��������� ������ 10 ������� ��������. �������� - 1111 1100 0000 0000.
	// 2. ��� ��� �������� �������� NOT(~) ������� � b - 0011 1111 1111 1111.
	
	int b = ~(~0 << (p + n));

	// 3. � ��������� ������� ��� ����� �������� t -  0000 0011 1100 0000, ������� ��� XOR(|) ������� ���������
	// ���� � �������� �.

	int f = y << p;
	int t = f & b;
	x = (x | t);

  return x;
}