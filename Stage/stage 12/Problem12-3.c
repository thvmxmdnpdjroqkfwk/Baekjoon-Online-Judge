#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int N, i, j, arr[10002] = { 0, }, input;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		scanf("%d", &input);
		arr[input]++;
	}
	for (i = 1; i <= 10000; i++)
	{
		for (j = 0; j < arr[i]; j++)
			printf("%d\n", i);
	}

	return 0;
}