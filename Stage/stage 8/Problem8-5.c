#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int T;
	scanf("%d", &T);

	int i, H, W, N;
	for (i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		if (N%H == 0)
			printf("%d%02d\n", H, N/H);
		else
			printf("%d%02d\n", N%H, N/H+1);
	}

	return 0;
}
/*
int main()
{
	int T;
	scanf("%d", &T);

	int i, H, W, N;
	for (i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		if (N%H == 0)
			printf("%d\n", H*100+N/H);
		else
			printf("%d\n", N%H*100+N/H+1);
	}

	return 0;
}
*/