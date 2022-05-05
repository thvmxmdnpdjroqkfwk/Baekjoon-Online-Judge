#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long pre = 0, now = 1, tmp, n, i;
	scanf("%lld", &n);
	for (i = 1; i < n; i++)
	{
		tmp = now;
		now = now + pre;
		pre = tmp;
	}
	printf("%lld", now);

	return 0;
}