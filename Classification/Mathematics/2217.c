#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i, A, list[100001] = { 0, }, max = 0, num = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &A);
		list[A]++;
	}
	for (i = 100000; i >= 0; i--)
	{
		if (list[i] > 0)
		{
			num += list[i];
			if (num * i > max)
				max = num * i;
		}
	}
	printf("%d", max);

	return 0;
}
// 모든 로프를 사용할 필요가 없다
// 0 0 0 2 0 3 0