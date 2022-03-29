#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, arr[1001], i, j, t, P = 0, S = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	// 오름 차순 정렬 (버블)
	for (i = N - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		P += arr[i];
		S += P;
	}
	printf("%d", S);

	return 0;
}

// 31432 3+4+8+11+13=39
// 12334 1+3+6+9+13=32
// 오름차순으로 배열되어 있을 때 가장 작음
// P=0,S=0 -> P+=arr[i] S+=P
// P: 3 4 8 11 13, S: 3 7 15 26 39