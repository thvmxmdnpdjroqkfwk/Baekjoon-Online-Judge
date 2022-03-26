#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// arr[1] = 3 -> 1번열 중에서 3번 행에 퀸 들어감 / 14일 때 sub[30], -14일 때 sub[2], 0일 때 sub[16]
// 1번열에서 3번행에 퀸이 들어갔다고 가정
// 2번열에서 3번행 빼고 다 가능, 5번행에 들어갔다고 가정
// 3번열에서 3,5번행 빼고 다 가능, 4번행에 들어갔다고 가정
// 4번열에서 3,4,5번행 빼고 다 가능, 1번행에 들어갔다고 가정
// 5번열에서 1,3,4,5번행 빼고 가능, 2번행에 들어갔다고 가정
// arr = {0, 3, 5, 4, 1, 2} -> use_row를 사용해서 행 중에 사용 안 된 행이 올 수 있도록 도와줌
// sum과 sub를 사용해서 퀸이 놓여진 위치에서 대각선 다 제거하고 남아 있는 것들 중에서 선택될 수 있도록 도와줌
int arr[16] = { 0 }, ans = 0, use_row[16] = { 0, }, sum[31] = { 0, }, sub[31] = { 0, };
void back(int N, int n)
{
	int i;
	if (n == N)
		ans++;
	else
	{
		for (i = 1; i <= N; i++)
		{
			if (use_row[i] == 0 && sum[n + 1 + i] == 0 && sub[n + 1 - i + 16] == 0)
			{
				arr[n + 1] = i;
				use_row[i] = 1;
				sum[n + 1 + i] = 1;
				sub[n + 1 - i + 16] = 1;
				back(N, n + 1);
				arr[n + 1] = 0;
				use_row[i] = 0;
				sum[n + 1 + i] = 0;
				sub[n + 1 - i + 16] = 0;
			}
		}
	}
}
int main()
{
	int N;
	scanf("%d", &N);
	back(N, 0);
	printf("%d", ans);
}
/*
// i는 1씩 증가시키고 / j는 is used를 활용하여 사용하지 않은거만 체크
int arr[16][16] = { 0, }, ans = 0, isused[16] = { 0, }, temp = 0;
void back(int N, int n)
{
	int i, j, k, l;
	if (n == N)
		ans++;
	else
	{
		for (i = 1; i <= N; i++)
		{
			if (temp < i)
			{
				for (j = 1; j <= N; j++)
				{
					if (isused[j] == 0)
					{
						int tmp[16][16] = { 0, };
						if (arr[i][j] == 0)
						{
							temp = i;
							isused[j] = 1;
							for (k = 1; k <= N; k++)
							{
								for (l = 1; l <= N; l++)
								{
									if (arr[k][l] == 0 && (i == k || j == l || i + j == k + l || i - j == k - l))
									{
										arr[k][l] = 1;
										tmp[k][l] = 1;
									}
								}
							}
							back(N, n + 1);
							temp = 0;
							isused[j] = 0;
							for (k = 1; k <= N; k++)
							{
								for (l = 1; l <= N; l++)
								{
									if (tmp[k][l] == 1)
										arr[k][l] = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}
int main()
{
	int N;
	scanf("%d", &N);
	back(N, 0);
	printf("%d", ans);
}
*/