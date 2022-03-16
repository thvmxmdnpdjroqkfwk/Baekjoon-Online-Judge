#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int T, i;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		int n;
		scanf("%d", &n);

		///////////////// 소수 구하기의 정석! ///////////////////
		int arr[10005] = {0,};
		int j, k, cnt = 0, len = sqrt(n);
		
		for (j = 2; j <= len; j++)
		{
			for (k = j; k <= n/j; k++)
				arr[j*k] = 1;
		}
		///////////////////////////////////////////////////////
		for (j = n/2; j > 1; j--)
		{
			if (arr[j] == 0 && arr[n-j] == 0)
			{
				printf("%d %d\n", j, n-j);
				break;
			}
		}
	}

	return 0;
}

// i n-i