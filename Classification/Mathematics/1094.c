#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	int X, small = 64, sum = 64, count = 1;
	scanf("%d", &X);
	while (1)
	{
		if (sum > X)
		{
			small /= 2;
			if (sum - small >= X)
				sum -= small;
			else
				count++;
		}
		else
			break;
	}
	printf("%d", count);

	return 0;
}
*/
// 32 -> 16 16 -> 16 8 -> 16 4 4 -> 16 4 2 2 -> 16 4 2 1

int main()
{
	int X, S = 64, count = 0;
	scanf("%d", &X);
	while (X > 0)
	{
		if (X >= S)
		{
			X -= S;
			count++;
		}
		else
			S /= 2;
	}
	printf("%d", count);

	return 0;
}