#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 전체 배열에서 자기 보다 작은 것의 개수 출력
int compare(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
int arr[1000001] = { 0, }, tmp[1000001] = { 0, }, tmp_del[1000001] = { 0, };
int main()
{
	int N, n = 1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	memcpy(tmp, arr, sizeof(int) * N);  // 배열 복사 붙여넣기
	// 오름차순 정렬
	qsort(tmp, N, sizeof(int), compare);
	// 중복 제거
	tmp_del[0] = tmp[0];
	for (int i = 1; i < N; i++)
	{
		if (tmp[i] != tmp_del[n - 1])
			tmp_del[n++] = tmp[i];
	}
	// 이원 탐색
	for (int i = 0; i < N; i++)
	{
		// bsearch는 주소값을 리턴해줌
		printf("%d ", ((int)bsearch(&arr[i], tmp_del, n, sizeof(int), compare) - (int)tmp_del) / sizeof(int));
	}
}
/*
int arr[1000000];
int main()
{
	int N, i, j, k;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < N; i++)
	{
		int count = 0;
		for (j = 0; j < N; j++)
		{
			if (arr[i] > arr[j])
			{
				count++;
				for (k = 0; k < j; k++)
				{
					if (arr[j] == arr[k])
					{
						count--;
						break;
					}
				}
			}
		}
		printf("%d ", count);
	}

	return 0;
}
*/
/*
// 오름차순 정렬 후
int arr[1000000][2];
int main()
{
	int N, i, j, k;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i][0]);
		arr[i][1] = i;
	}
	for (i = 0; i < N; i++)
	{
		printf("값: %d, index: %d  ", arr[i][0], arr[i][1]);
	}

	// [i][0]이랑 [i][1] 함께 움직여야 함
	// 오름차순 정렬하려고 하면 시간 초과일 듯

	return 0;
}
*/