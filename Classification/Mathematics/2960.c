#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[1001] = { 0, }, N, K, i, j;
	scanf("%d %d", &N, &K);
	for (i = 2; i <= N; i++)
		arr[i] = 1;
	for (i = 2; i <= N; i++)
	{
		if (arr[i] == 1)
		{
			for (j = 1; j <= N / i; j++)
			{
				if (arr[i * j] == 1)
				{
					arr[i * j] = 0;
					K--;
				}
				if (K == 0)
				{
					printf("%d", i * j);
					break;
				}
			}
		}
		if (K == 0)
			break;
	}

	return 0;
}