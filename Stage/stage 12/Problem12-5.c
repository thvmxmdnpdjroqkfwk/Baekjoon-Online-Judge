#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int N, i, j, arr[10] = { 0, };
	scanf("%d", &N);

	while (N > 0)
	{
		arr[N % 10]++;
		N /= 10;
	}

	for (i = 9; i >= 0; i--)
	{
		for (j = 0; j < arr[i]; j++)
			printf("%d", i);
	}

	return 0;
}