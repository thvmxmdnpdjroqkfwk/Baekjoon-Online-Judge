#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, A, burger = 2000, drink = 2000;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &A);
		if (i < 3 && A < burger)
			burger = A;
		else if (i >= 3 && A < drink)
			drink = A;
	}
	printf("%d", burger + drink - 50);

	return 0;
}