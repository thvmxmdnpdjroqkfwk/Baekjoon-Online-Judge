#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	int i, j, x[50] = { 0, }, y[50] = { 0, };
	for (i = 0; i < N; i++)
		scanf("%d %d", &x[i], &y[i]);

	for (i = 0; i < N; i++)
	{
		int count = 0;
		for (j = 0; j < N; j++)
		{
			if (x[i] < x[j] && y[i] < y[j])
				count++;
		}
		printf("%d\n", count + 1);
	}

	return 0;
}