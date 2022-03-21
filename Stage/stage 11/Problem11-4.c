#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	int i, j, m, n, min = 50*50;
	char arr[50][50];
	for (i = 0; i < N; i++)
		scanf("%s", &arr[i]);	
	for (i = 0; i < N - 7; i++)
	{
		for (j = 0; j < M - 7; j++)
		{
			int cnt1 = 0, cnt2 = 0;
			for (m = i; m < i + 8; m++)
			{
				for (n = j; n < j + 8; n++)
				{
					if ((m + n) % 2 == 0)
					{
						if (arr[m][n] != 'B')
							cnt1++;
						else if (arr[m][n] != 'W')
							cnt2++;
					}
					else
					{
						if (arr[m][n] != 'W')
							cnt1++;
						else if (arr[m][n] != 'B')
							cnt2++;
					}
				}
			}
			if (cnt1 > cnt2)
			{
				if (min > cnt2)
					min = cnt2;
			}
			else
			{
				if (min > cnt1)
					min = cnt1;
			}
			
		}
	}
	printf("%d", min);

	return 0;
}