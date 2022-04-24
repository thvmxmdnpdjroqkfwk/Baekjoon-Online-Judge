#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
/*
int main()
{
	int N;
	scanf("%d", &N);
	int i, j;
	for (i = 0; i < N; i++)
	{
		int a = 1, b = 1;
		while (1)
		{
			printf("*");
			if (a == N)
				break;
			a++;
			printf(" ");
			if (a == N)
				break;
			a++;
		}
		printf("\n");
		while (1)
		{
			printf(" ");
			if (b == N)
				break;
			b++;
			printf("*");
			if (b == N)
				break;
			b++;
		}
		printf("\n");
	}

	return 0;
}
*/
/*
int main()
{
	int N;
	scanf("%d", &N);
	int N2 = N * 2, i, j;
	for (i = 0; i < N2; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 0; j < N; j++)
			{
				if (j % 2 == 0)
					printf("*");
				else
					printf(" ");
			}
		}
		else
		{
			for (j = 0; j < N; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				else
					printf("*");
			}
		}
		printf("\n");
	}
}
*/
int main()
{
	int N;
	scanf("%d", &N);
	int N2 = N * 2, i, j;
	for (i = 0; i < N2; i++)
	{
		for (j = 0; j < N; j++)
		{
			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
