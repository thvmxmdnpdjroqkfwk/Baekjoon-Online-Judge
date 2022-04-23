#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, C, arr[101] = { 0, }, i, cnt = 0;
	scanf("%d %d %d", &A, &B, &C);
	arr[A]++;
	arr[B]++;
	arr[C]++;
	for (i = 100; i > 0; i--)
	{
		if (arr[i] > 0)
		{
			cnt++;
			arr[i]--;
			if (cnt == 2)
			{
				printf("%d", i);
				break;
			}
			i++;
		}
	}

	return 0;
}