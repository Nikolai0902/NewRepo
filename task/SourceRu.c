#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int i;
	bool isN = true;

	while (isN)
	{
		scanf_s("%o", &i);

		if (i >= 100 && i <= 999) {
			switch (i / 100)
			{
			case 1: printf("Сто "); break;
			case 2: printf("Двести "); break;
			case 3: printf("Триста "); break;
			case 4: printf("Четыреста "); break;
			case 5: printf("Пятьсот "); break;
			case 6: printf("Шестьсот "); break;
			case 7: printf("Семьсот "); break;
			case 8: printf("Восемьсот "); break;
			case 9: printf("Девятьсот "); break;
			}

			switch ((i % 100) / 10)
			{
			case 2: printf("Двадсать "); break;
			case 3: printf("Тридсать "); break;
			case 4: printf("Сорок "); break;
			case 5: printf("Пятдесят "); break;
			case 6: printf("Шестьдесят "); break;
			case 7: printf("Семьдесят "); break;
			case 8: printf("Восемдесят "); break;
			case 9: printf("Девяносто "); break;
			}

			if (i % 100 >= 10 & i % 100 < 20) {
				switch (i % 100) {
				case 10: printf("десять"); break;
				case 11: printf("одинадцать"); break;
				case 12: printf("двенадцать"); break;
				case 13: printf("тринадцать"); break;
				case 14: printf("четырнадцать"); break;
				case 15: printf("пятнадцать"); break;
				case 16: printf("шестнадцать"); break;
				case 17: printf("семнадцать"); break;
				case 18: printf("восемнадцать"); break;
				case 19:printf("девятнадцать"); break;
				}
			}
			else {
				switch (i % 10)
				{
				case 0: printf("ноль\n"); break;
				case 1: printf("один\n"); break;
				case 2: printf("два\n"); break;
				case 3: printf("три\n"); break;
				case 4: printf("четыре"); break;
				case 5: printf("пять"); break;
				case 6: printf("шесть"); break;
				case 7: printf("семь"); break;
				case 8: printf("восемь"); break;
				case 9: printf("девять"); break;
				}
			}


			isN = false;
		}
		else
		{
			printf("Enter value 100...999\n");
		}
	}
	return 0;
}