

#include "stdafx.h"
#include <stdio.h>




int main(void)
{
	int l;
	printf("Vvedite cel chislo ");
	scanf_s("%d", &l);
	printf("Vashe chislo zadomnapered ");
	if (!l)
	{
		printf("0\n");
		return 0;
	}
	while (l)
	{
		printf("%d", l % 10);
		l /= 10;
	}
	printf("\n");

	return 0;
}