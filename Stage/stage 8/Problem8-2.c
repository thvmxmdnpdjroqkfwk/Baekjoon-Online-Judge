#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, i = 2;
	scanf("%d", &N);
	if (N == 1)
		printf("%d", 1);
	else
	{
		while (1)
		{
			if ((3*i*i-9*i+7 < N) && (3*i*i-3*i+1 >= N))
			{
				printf("%d", i);
				break;
			}
			i++;
		}
	}

	return 0;
}

/*
int main()
{
	int N, i = 1, ans = 1;
	scanf("%d", &N);
	while (N > ans)
	{
		ans = ans+6*i;
		i++;
	}
	if (N == 1)
		printf("%d", 1);
	else
		printf("%d", i);
}
*/