#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i, j;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		for (j = 1; j <= 2 * (N - i); j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (i = N - 1; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		for (j = 1; j <= 2 * (N - i); j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}

// 1 8 1
// 2 6 2
// 3 4 3
// 4 2 4
// 5 0 5
// 4 2 4
// 3 4 3
// 2 6 2
// 1 8 1
