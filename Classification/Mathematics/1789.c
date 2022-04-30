#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long S, i, s = 0;
	scanf("%lld", &S);
	for (i = 1; ; i++)
	{
		s += i;
		if (S < s)
		{
			printf("%lld", i - 1);
			break;
		}
	}

	return 0;
}
// 1~19 190
// 190~ 19개
// ~189 18개