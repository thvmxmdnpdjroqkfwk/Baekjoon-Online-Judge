#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pick[8] = { 0, };

void back(int a, int b, int c)
{
	int i;
	if (c == b)
	{
		for (i = 0; i < b; i++)
			printf("%d ", pick[i]);
		printf("\n");
	}
	else
	{
		for (i = 1; i <= a; i++)
		{
			pick[c] = i;
			back(a, b, c + 1);
			pick[c] = 0;
		}
	}
}

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	back(N, M, 0);

	return 0;
}