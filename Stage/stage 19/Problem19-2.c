#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[1000000] = { 0, };

int main()
{
	int N, i;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		arr[i] = i + 1;
	int j = 0, k = N - 1;
	while (1)
	{
		if (j >= k - 1)
			break;
		j++;
		k++;
		arr[k] = arr[j];
		j++;
	}
	printf("%d", arr[k]);

	return 0;
}