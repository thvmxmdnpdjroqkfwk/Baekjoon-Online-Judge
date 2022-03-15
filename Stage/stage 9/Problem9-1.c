#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i, num, ans = 0;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);

		int j, count = 0;
		if (num != 1)
		{
			for (j = 1; j <= num; j++)
			{
				if (num%j == 0)
					count++;
			}
			if (count == 2)
				ans++;
		}
	}
	printf("%d", ans);

	return 0;
}