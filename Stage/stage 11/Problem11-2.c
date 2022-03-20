#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		//ans = i + i % 10 + (i / 10) % 10 + (i / 100) % 10 + (i / 1000) % 10 + (i / 10000) % 10 + (i / 100000) % 10 + (i / 1000000);
		int add = i, ans = i;
		while (add > 0)
		{
			ans = ans + add % 10;
			add = add / 10;
		}
		if (ans == N)
		{
			printf("%d", i);
			break;
		}
		if (i == N)
			printf("%d", 0);
	}

	return 0;
}