#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T, N, M, i, j;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		long long ans = 1;
		scanf("%d %d", &N, &M);
		if (N > M / 2)
			N = M - N;
		for (j = M; j > M - N; j--)
			ans *= j;
		for (j = 2; j <= N; j++)
			ans /= j;
		printf("%lld\n", ans);
	}

	return 0;
}