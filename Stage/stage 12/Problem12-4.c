﻿#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <math.h>

// 삽입 정렬 이용
/*
int arr[500002] = { 0, };
int main()
{
	int N, i, j, tmp, ans = 0, result, max = 0, count = 0, cnt = 0;
	scanf("%d", &N);

	// 배열 입력 받기 /////////////////////////////////////
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	////////////////////////////////////////////////////////////////////////////////

	// 배열 오름차순 정렬하기 /////////////////////////////////////
	for (i = 1; i < N; i++)
	{
		tmp = arr[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (tmp < arr[j])
			{
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
			else
				break;
		}
	}
	////////////////////////////////////////////////////////////////////////////////

	// 산술평균 출력 /////////////////////////////////////
	for (i = 0; i < N; i++)
		ans += arr[i];
	ans = round((double)ans / N);
	printf("%d\n", ans);
	////////////////////////////////////////////////////////////////////////////////

	// 중앙값 출력 /////////////////////////////////////
	printf("%d\n", arr[(N - 1) / 2]);
	////////////////////////////////////////////////////////////////////////////////

	// 최빈값 출력 /////////////////////////////////////
	for (i = 1; i < N; i++)
	{
		if (arr[i] == arr[i - 1])
			count++;
		else
			count = 0;
		if (count > max)
		{
			max = count;
			cnt = 0;
			result = arr[i];
		}
		else if (count == max)
		{
			cnt++;
			if (cnt == 1)
				result = arr[i];
		}
	}
	if (N == 1)
		printf("%d\n", arr[0]);
	else
		printf("%d\n", result);
	////////////////////////////////////////////////////////////////////////////////

	// 범위 출력 /////////////////////////////////////
	printf("%d", arr[N - 1] - arr[0]);
	////////////////////////////////////////////////////////////////////////////////

	return 0;
}
*/
// counting 정렬 이용
int main()
{
	int N, i, j;
	scanf("%d", &N);
	int num, arr[8002] = { 0, };
	if (N == 1)
	{
		scanf("%d", &num);
		printf("%d\n%d\n%d\n%d", num, num, num, 0);
	}
	else
	{
// 배열 입력 받기 ////////////////////////////////////////////////////////////////////////////////////
		for (i = 0; i < N; i++)
		{
			scanf("%d", &num);
			arr[num + 4000]++;  // {-4000개수, -3999개수, ..., 0개수, ..., 3999개수, 4000개수}
		}
/////////////////////////////////////////////////////////////////////////////////////////////////////

// 산술평균, 중앙값, 최빈값, 범위 출력하기 /////////////////////////////////////////////////////////////
		int ans1 = 0, n = 0, ans2, ans3, ans4, ans5, max = 0, count = 0, diff;
		for (i = 0; i <= 8000; i++)
		{
			if (arr[i] > 0)
			{
				ans1 += arr[i] * (i - 4000);  // 이 문장을 A라고 하면
				for (j = 0; j < arr[i]; j++)
				{
					// ans1 += (i - 4000); A 지우고 이렇게 써도 됨
					n++;
					if (n == 1)
						ans2 = i - 4000;  // 맨 왼쪽
					else if (n == N)
						ans3 = i - 4000;  // 맨 오른쪽
					else if (n == (N + 1) / 2)
						ans4 = i - 4000;  // 중앙값
				}
				if (arr[i] > max)
				{
					max = arr[i];
					ans5 = i - 4000;
					count = 0;
				}
				else if (arr[i] == max)
				{
					count++;
					if (count == 1)
						ans5 = i - 4000;  // 최빈값
				}
			}
		}
		ans1 = round((double)ans1 / N);  // 산술평균
		diff = ans3 - ans2;  // 범위
		printf("%d\n%d\n%d\n%d", ans1, ans4, ans5, diff);
/////////////////////////////////////////////////////////////////////////////////////////////////////
	}

	return 0;
}