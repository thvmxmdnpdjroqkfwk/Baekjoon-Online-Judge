#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int M, N, i, sum = 0;
	scanf("%d %d", &M, &N);
	M = ceil(sqrt(M));
	N = floor(sqrt(N));
	for (i = M; i <= N; i++)
		sum += i * i;
	if (sum == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, M * M);

	return 0;
}