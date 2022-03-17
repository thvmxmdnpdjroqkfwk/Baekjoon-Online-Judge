#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 노가다!
	/*
	int x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	if (x1 == x2)
		x4 = x3;
	else if (x1 == x3)
		x4 = x2;
	else
		x4 = x1;
	if (y1 == y2)
		y4 = y3;
	else if (y1 == y3)
		y4 = y2;
	else
		y4 = y1;
	printf("%d %d", x4, y4);
	*/

	// 배열 이용! (배열에서 혼자 다른 값 찾기, n >= 3)
	/*
	int n;
	scanf("%d", &n);
	int x[1000] = {0,}, i;
	for (i = 0; i < n; i++)
		scanf("%d", &x[i]);
	if (x[0] != x[1] && x[1] == x[2])
		printf("%d", x[0]);
	else if (x[n-2] != x[n-1] && x[n-3] == x[n-2])
		printf("%d", x[n-1]);
	else
	{
		for (i = 0; i < n-1; i++)
		{
			if (x[i] != x[i+1])
			{
				printf("%d", x[i+1]);
				break;
			}
		}
	}
	*/
	// x, y 각 배열에서 혼자만 다른 값 찾기
	// 3대신 n값을 설정해서 넣으면 배열 길이 더 늘어남 (여기서는 배열 길이 3)
	int x[1000] = { 0, }, y[1000] = { 0, }, i;
	for (i = 0; i < 3; i++)
		scanf("%d %d", &x[i], &y[i]);
	if (x[0] != x[1] && x[1] == x[2])
		printf("%d ", x[0]);
	else if (x[3 - 2] != x[3 - 1] && x[3 - 3] == x[3 - 2])
		printf("%d ", x[3 - 1]);
	else
	{
		for (i = 0; i < 3 - 1; i++)
		{
			if (x[i] != x[i + 1])
			{
				printf("%d ", x[i + 1]);
				break;
			}
		}
	}
	if (y[0] != y[1] && y[1] == y[2])
		printf("%d ", y[0]);
	else if (y[3 - 2] != y[3 - 1] && y[3 - 3] == y[3 - 2])
		printf("%d ", y[3 - 1]);
	else
	{
		for (i = 0; i < 3 - 1; i++)
		{
			if (y[i] != y[i + 1])
			{
				printf("%d ", y[i + 1]);
				break;
			}
		}
	}

	return 0;
}