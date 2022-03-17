#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	int arr[5], i;
	arr[0] = x, arr[1] = y, arr[2] = w-x, arr[3] = h-y;
	int min = 1000;
	for (i = 0; i < 4; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d", min);

	return 0;
}