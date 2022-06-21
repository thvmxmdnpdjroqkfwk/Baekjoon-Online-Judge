#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T, i, j, N;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		long long arr[100] = { 1,1,1,2,2, };
		scanf("%d", &N);
		for (j = 5; j < N; j++)
			arr[j] = arr[j - 1] + arr[j - 5];
		printf("%lld\n", arr[N - 1]);
	}

	return 0;
}