#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	int i, arr[100] = { 0, };
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	int j, k, max = 0;
	for (i = 0; i < N - 2; i++)
	{
		for (j = i + 1; j < N - 1; j++)
		{
			for (k = j + 1; k < N; k++)
			{
				if (arr[i] + arr[j] + arr[k] <= M)
				{
					if (arr[i] + arr[j] + arr[k] > max)
						max = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}

	printf("%d", max);

	return 0;
}