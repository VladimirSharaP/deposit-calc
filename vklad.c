#include <stdio.h>

int main()
{
	int a, b;
	printf("Введите срок вклада в днях и сумму вклада\n");
	scanf("%d %d", &a, &b);
	if((a > 0) && (a < 366) && (b > 10000))
	{
		if (b > 100000)
		{
			if (a < 31)
			{
				b = b * 0.9;
				printf("Сумма вклада: %d\nСрок вклада: %d\n", b, a);
			}
			if ((a > 30) && (a < 121))
			{
				b = b * 1.03;
				printf("Сумма вклада: %d\nСрок вклада: %d\n", b, a);
			}
			if ((a > 120) && (a < 241))
			{
				b = b * 1.08;
				printf("Сумма вклада: %d\nСрок вклада: %d\n", b, a);
			}
			if ((a > 240) && (a < 366))
			{
				b = b * 1.15;
				printf("Сумма вклада: %d\nСрок вклада: %d\n", b, a);
			}
		}
		else
		{
			if (a < 31)
			{
				b = b * 0.9;
                                printf("Сумма вклада: %d\nСрок вклада: %d\n", b, a);
			}
                        if ((a > 30) && (a < 121))
			{
				b = b * 1.02;
                                printf("Сумма вклада: %d\nСрок вклада: %d\n", b, a);
			}
                        if ((a > 120) && (a < 241))
			{
				b = b * 1.06;
                                printf("Сумма вклада: %d\nСрок вклада: %d\n", b, a);
			}
                        if ((a > 240) && (a < 366))
			{
				b = b * 1.12;
                                printf("Сумма вклада: %d\nСрок вклада: %d\n", b, a);
			}
                }


	}
	else
	{
		printf("Ошибка. Введен неверный формат данных.");
	}
}
