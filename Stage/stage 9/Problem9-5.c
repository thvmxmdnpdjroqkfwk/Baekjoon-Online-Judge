#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int n = 1;
	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break;

		int i, j, arr[246920] = {0,}, count = 0;
		arr[1] = 1;
		for (i = 2; i <= n; i++)
		{
			for (j = n/i; j <= 2*n/i; j++)
			{
				if (j != 1)
					arr[i*j] = 1;
			}
		}

		for (i = n+1; i <= 2*n; i++)
		{
			if (arr[i] == 0)
				count++;
		}
		printf("%d\n", count);
	}

	return 0;
}