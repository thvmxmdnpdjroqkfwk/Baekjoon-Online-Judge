#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i, ans = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &N);
		ans += (N * N);
	}
	printf("%d", ans % 10);

	return 0;
}