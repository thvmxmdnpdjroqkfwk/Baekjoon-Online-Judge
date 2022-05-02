#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 0, A, B, i, max = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d %d", &A, &B);
		N += (B - A);
		if (max < N)
			max = N;
	}
	printf("%d", max);

	return 0;
}
// 빼기 먼저!