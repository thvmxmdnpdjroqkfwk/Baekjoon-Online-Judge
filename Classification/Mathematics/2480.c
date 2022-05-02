#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	int A[4], i, j, same, max = 0, cnt = 0;
	for (i = 0; i < 3; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < 2; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			if (A[i] == A[j])
			{
				cnt++;
				same = A[i];
			}
			else if (A[i] > A[j])
			{
				if (max < A[i])
					max = A[i];
			}
			else
			{
				if (max < A[j])
					max = A[j];
			}
		}
	}
	if (cnt == 3)
		printf("%d", 10000 + same * 1000);
	else if (cnt == 1)
		printf("%d", 1000 + same * 100);
	else
		printf("%d", max * 100);

	return 0;
}
*/
int main()
{
	int A[7] = { 0, }, i, N, same, max, cnt = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &N);
		A[N]++;
	}
	for (i = 1; i <= 6; i++)
	{
		if (cnt < A[i])
		{
			cnt = A[i];
			same = i;
		}
		if (A[i] > 0)
			max = i;
	}
	if (cnt == 3)
		printf("%d", 10000 + same * 1000);
	else if (cnt == 2)
		printf("%d", 1000 + same * 100);
	else
		printf("%d", max * 100);
}