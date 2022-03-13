#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int T;
	scanf("%d", &T);

	int i, k, n;
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &k, &n);
		int num[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 }, j, m;
		for (j = 0; j < k; j++)
		{
			for (m = 1; m < 14; m++)
			{
				num[m] = num[m]+num[m-1];
			}
		}
		printf("%d\n", num[n - 1]);
	}

	return 0;
}