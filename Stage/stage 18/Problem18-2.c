#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int K, N, i, j = 0, stack[100000] = { 0, }, sum = 0;
	scanf("%d", &K);
	for (i = 0; i < K; i++)
	{
		scanf("%d", &N);
		if (N != 0)
		{
			stack[j] = N;
			j++;
		}
		else
		{
			j--;
			stack[j] = 0;
		}
	}
	for (i = 0; i < j; i++)
		sum += stack[i];
	printf("%d", sum);

	return 0;
}