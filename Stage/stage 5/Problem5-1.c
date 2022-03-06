#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int N, i, input;
	int arr[2] = {1000000, -1000000};
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &input);
		if (arr[0] >= input)
			arr[0] = input;
		if (arr[1] <= input)
			arr[1] = input;
	}
	for (i = 0; i < 2; i++)
		printf("%d ", arr[i]);

	return 0;
}

// 위에는 배열 있고 아래는 배열 없음
/*
int main()
{
	int N, i, input;
	int max = -1000000;
	int min = 1000000;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &input);
		if (input >= max)
			max = input;
		if (input <= min)
			min = input;
	}
	printf("%d %d", min, max);

	return 0;
}
*/