#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	if (N != 1)
	{
		int div = 2;
		while (div < N)
		{
			if (N%div == 0)
			{
				N = N/div;
				printf("%d\n", div);
			}
			else
				div++;
		}
		printf("%d\n", N);
	}

	return 0;
}