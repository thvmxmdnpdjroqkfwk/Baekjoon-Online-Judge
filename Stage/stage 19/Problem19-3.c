#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1000000] = { 0, }, ans[1000] = { 0, };
int main()
{
	int N, K, i;
	scanf("%d %d", &N, &K);
	for (i = 0; i < N; i++)
		arr[i] = i + 1;
	int j = 0, k = N, l = 0;
	while (1)
	{
		for (i = 0; i < K - 1; i++)
		{
			arr[k] = arr[j];
			j++;
			k++;
		}
		ans[l] = arr[j];
		if (ans[N - 1] != 0)
			break;
		j++;
		l++;
	}
	printf("<");
	for (i = 0; i < N - 1; i++)
		printf("%d, ", ans[i]);
	printf("%d>", arr[j]);

	return 0;
}
// 앞에 2개를 뒤에 다시 넣고 앞에 1개를 배열에 넣기

// 1 2 3 4 5 6 7 1 2 4 5 7 1 4 5 1 4 1 4 1 1
// 3 6 2 7 5 4