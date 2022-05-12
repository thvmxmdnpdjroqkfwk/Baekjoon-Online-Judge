#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, max = 0, i, j;
	for (i = 1; i < 6; i++)
	{
		int P, S = 0;
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &P);
			S += P;
			if (S > max)
			{
				max = S;
				num = i;
			}
		}
	}
	printf("%d %d", num, max);

	return 0;
}

