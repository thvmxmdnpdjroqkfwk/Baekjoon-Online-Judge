#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i, sum = 0, min = 100;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &N);
		if (N % 2 == 1)
		{
			sum += N;
			if (min > N)
				min = N;
		}
	}
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, min);

	return 0;
}