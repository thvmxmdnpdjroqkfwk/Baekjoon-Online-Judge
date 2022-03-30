#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
long long distance[100001] = { 0, }, price[100001] = { 0, };
int main()
{
	long long N, i, j, won = 0;
	scanf("%lld", &N);
	for (i = 0; i < N - 1; i++)
		scanf("%lld", &distance[i]);
	for (i = 0; i < N; i++)
		scanf("%lld", &price[i]);
	/////////////////////////////////////////////////////////
	for (i = 0; i < N; i++)
	{
		long long km = 0;
		for (j = i + 1; j < N; j++)
		{
			km += distance[j - 1];
			if (price[i] >= price[j])
			{
				won += (km * price[i]);
				i = j - 1;
				break;
			}
		}
	}
	printf("%lld", won);

	return 0;
}
*/
long long distance[100001] = { 0, };
int main()
{
	long long N, i, price, won = 0, min;
	scanf("%lld", &N);
	for (i = 0; i < N - 1; i++)
		scanf("%lld", &distance[i]);
	//////////////////////////////////////////////////////
	for (i = 0; i < N; i++)
	{
		scanf("%lld", &price);
		if (i == 0)
			min = price;
		else
		{
			if (min >= price)
			{
				won += min * distance[i - 1];
				min = price;
			}
			else
				won += min * distance[i - 1];
		}

	}
	printf("%lld", won);

	return 0;
}
// 처음에 무조건 넣는데 일단 그곳보다 저렴한 곳까지 가기 위해 넣는다
// 거기서 그곳보다 저렴한 곳까지 가기 위해 넣는다
// 없으면 거기서 끝까지 갈만큼 넣는다