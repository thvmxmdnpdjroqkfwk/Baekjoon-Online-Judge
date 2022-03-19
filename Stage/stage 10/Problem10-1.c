#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fac(int N)
{
	if (N > 1)
		return N * fac(N - 1);
	else
		return 1;
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", fac(N));
}

/*
int main()
{
	int N;
	scanf("%d", &N);
	if (N == 0)
		printf("%d", 1);
	else
	{
		int i, ans = 1;
		for (i = 2; i <= N; i++)
			ans *= i;
		printf("%d", ans);
	}

	return 0;
}
*/