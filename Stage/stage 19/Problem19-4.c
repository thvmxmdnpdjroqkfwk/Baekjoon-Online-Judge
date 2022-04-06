#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T, i, j;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		int N, M, arr[10000] = { 0, };
		scanf("%d %d", &N, &M);
		for (j = 0; j < N; j++)
			scanf("%d", &arr[j]);
		int a = 0, b = N, cnt = 0;
		while (1)
		{
			int c = 0;
			for (j = a + 1; j < b; j++)
			{
				if (arr[j] > arr[a])
				{
					c = 1;
					break;
				}
			}
			if (c == 1)
			{
				if (a == M)
					M += (b - a);
				arr[b] = arr[a];
				b++;
			}
			else if (c == 0)
			{
				cnt++;
				if (a == M)
				{
					printf("%d\n", cnt);
					break;
				}
			}
			a++;
		}
	}

	return 0;
}