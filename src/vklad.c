#include <stdio.h>
#include "deposit.h"

int main()
{
	int a, b;
	printf("Введите срок вклада в днях и сумму вклада\n");
	scanf("%d %d", &a, &b);
	if((a > 0) && (a < 366) && (b > 10000))
	{
		deposit(a, b);
	}
	else
	{
		printf ("Введен неверный формат данных.");
	}
}
