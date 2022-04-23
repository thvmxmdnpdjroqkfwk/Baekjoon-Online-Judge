#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, n, i, ans = 0;
	scanf("%d", &N);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &n);
		if (n == N)
			ans++;
	}
	printf("%d", ans);

	return 0;
}