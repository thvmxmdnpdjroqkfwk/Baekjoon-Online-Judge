#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	long long K, i, j, sum = 0, N[100000] = { 0, };
	scanf("%lld", &K);
	for (i = 0; i < K; i++)
	{
		scanf("%lld", &N[i]);
		if (N[i] != 0)
			sum += N[i];
		else
		{
			for (j = i - 1; j >= 0; j--)
			{
				if (N[j] != 0)
				{
					sum -= N[j];
					N[j] = 0;
					break;
				}
			}
		}
	}
	printf("%lld", sum);

	return 0;
}
*/
// j로 가장 최근 위치를 표시하면서 진행함
int main()
{
	int K, N, i, j = 0, L[100001] = { 0, }, sum = 0;
	scanf("%d", &K);
	for (i = 0; i < K; i++)
	{
		scanf("%d", &N);
		if (N != 0)
		{
			L[j] = N;
			j++;
		}
		else
		{
			j--;
			L[j] = 0;
		}
	}
	for (i = 0; i < K; i++)
		sum += L[i];
	printf("%d", sum);
}




