#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int* a, int n);

int main()
{
	int n, i, arr[10000];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("%d\n", sum(arr, n));

	return 0;
}

int sum(int *a, int n)
{
	int i, result = 0;
	for (i = 0; i < n; i++)
		result = result+a[i];

	return result;
}