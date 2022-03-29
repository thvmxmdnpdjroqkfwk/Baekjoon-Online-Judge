#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, K, W[11], i, ans = 0;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++)
		scanf("%d", &W[i]);
	for (i = N - 1; i >= 0; i--)
	{
		if (W[i] <= K)
		{
			ans += K / W[i];
			K -= (K / W[i]) * W[i];
		}
		if (K == 0)
			break;
	}
	printf("%d", ans);

	return 0;
}