#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
// 숫자 하나 하나 소수인지 확인하기
/*
int main()
{
	int M, N;
	scanf("%d %d", &M, &N);

	int i;
	for (i = M; i <= N; i++)
	{
		int j, count = 0;
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
				count++;
		}
		if (count == 1)
			printf("%d\n", i);
	}

	return 0;
}
*/
// 2개의 곱으로 이루어진 수들은 다 제거하기
/*
int main()
{
	int M, N, arr[1000002] = {0,}, i;
	scanf("%d %d", &M, &N);

	arr[1] = 1;
	for (i = 2; i <= N/2; i++)
	{
		int j;
		for (j = 2; j <= N/i; j++)
			arr[i*j] = 1;
	}

	for (i = M; i <= N; i++)
	{
		if (arr[i] == 0)
			printf("%d\n", i);
	}
	
	return 0;
}
*/
// 2를 제외한 2의 배수, 3을 제외한 3의 배수, 4를 제외한 4의 배수... 지우기
/*
int main()
{
	int M, N, arr[1000002] = {0,}, i;
	scanf("%d %d", &M, &N);

	arr[1] = 1;
	int len = ceil(sqrt(N));
	for (i = 2; i <= len; i++)
	{
		int j;
		for (j = M; j <= N; j++)
		{
			if (j%i == 0 && j != i)
				arr[j] = 1;
		}
	}

	for (i = M; i <= N; i++)
	{
		if (arr[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}
*/
// 소수 자기 자신을 제외한 소수의 배수 지우기 (에라토스테네스의 체)
int main()
{
	int M, N, arr[1000002] = {0,}, i;
	scanf("%d %d", &M, &N);

	arr[1] = 1;
	int len = ceil(sqrt(N));
	// 이게 중요함! for문 많이 안 돌릴 수 있음!!
	// len보다 작거나 같은 소수의 배수만 지워도 됨
	// N이 120이면 2 3 5 7의 배수들만 지워도 충분
	for (i = 2; i <= len; i++)
	{
		int j, count = 0;
		for (j = 2; j <= i; j++)
		{
			if (i%j == 0)
				count++;
		}
		if (count == 1)
		{
			int k;
			for (k = M/i; k <= N/i; k++)
			{
				if (k != 1)
					arr[i*k] = 1;
			}
		}
	}

	for (i = M; i <= N; i++)
	{
		if (arr[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}