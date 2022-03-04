#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, X, A, i;
	scanf("%d %d", &N, &X);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &A);
		if (A < X)
			printf("%d\n", A);
	}

	return 0;
}

/*
int main()
{
	int N, X, i, num;
	scanf("%d %d", &N, &X);
	int A[10000];
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		A[i] = num;
	}
	for (i = 0; i < N; i++)
	{
		if (A[i] < X)
			printf("%d ", A[i]);
	}
}
*/