#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);

	int i, sum = 0, min = 10000;
	for (i = M; i <= N; i++)
	{
		int j, count = 0;
		for (j = 2; j <= i; j++)
		{
			if (i%j == 0)
				count++;
		}
		if (count == 1)
		{
			sum = sum+i;
			if (min >= i)
				min = i;
		}
	}
	if (sum > 0)
		printf("%d\n%d", sum, min);
	else
		printf("%d", -1);

	return 0;
}