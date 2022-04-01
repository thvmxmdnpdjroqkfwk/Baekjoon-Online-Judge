#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	int A, B, div = 2, ans = 1, cnt = 0;
	scanf("%d %d", &A, &B);
	while (1)
	{
		if (A % div == 0 && B % div == 0)
		{
			cnt++;
			A /= div;
			B /= div;
			ans *= div;
		}
		else
		{
			if (A == div || B == div)
				break;
			div++;
		}
	}
	if (cnt == 0)
		printf("%d\n%d", 1, A * B);
	else
		printf("%d\n%d", ans, ans * A * B);

	return 0;
}
*/
int main()
{
	int A, B, i, min, max, ans1, ans2;
	scanf("%d %d", &A, &B);
	if (A > B)
	{
		min = B;
		max = A;
	}
	else
	{
		min = A;
		max = B;
	}
	for (i = 1; i <= min; i++)
	{
		if (A % i == 0 && B % i == 0)
			ans1 = i;
	}
	for (i = max; ; i++)
	{
		if (i % A == 0 && i % B == 0)
		{
			ans2 = i;
			break;
		}
	}
	printf("%d\n%d", ans1, ans2);

	return 0;
}