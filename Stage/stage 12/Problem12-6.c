#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

/*
// 이건 너무 느리다.....
int arr[100000][2] = { 0, };
int main()
{
	int N, i, j, k;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d %d", &arr[i][0], &arr[i][1]);

	for (i = 0; i < 200001; i++)
	{
		int y[200002] = { 0, };
		for (j = 0; j < N; j++)
		{
			if (i - 100000 == arr[j][0])
				y[arr[j][1] + 100000]++;
		}
		for (j = 0; j < 200002; j++)
		{
			for (k = 0; k < y[j]; k++)
				printf("%d %d\n", i - 100000, j - 100000);
		}
	}

	return 0;
}
*/

// 오름차순으로 정렬할 때 사용하는 비교함수
/*
int static compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}
// qsort(배열, 배열 원소 수, 배열 원소 하나의 크기, compare);

int main()
{
	int arr[] = { 32, 11, 97, 42, 21, 70, 56, 67, 88, 100 };
	int array_size = sizeof(arr) / sizeof(int);
	int i;

	// 정렬 전
	for (i = 0; i < array_size; i++) printf("%d ", arr[i]);
	printf("\n");

	qsort(arr, array_size, sizeof(int), compare);

	// 정렬 후
	for (i = 0; i < array_size; i++) printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
*/
// 내장함수 이용 퀵 정렬이 짱이다
struct point
{
	int x, y;
};
struct point arr[100000] = { 0, };
int compare(const void* a, const void* b)
{
	if (((struct point*)a)->x == ((struct point*)b)->x)
		return ((struct point*)a)->y - ((struct point*)b)->y;
	return ((struct point*)a)->x - ((struct point*)b)->x;
}
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d %d", &(arr[i].x), &(arr[i].y));
	qsort((struct point*)arr, N, sizeof(struct point), compare);
	for (int i = 0; i < N; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
	return 0;
}