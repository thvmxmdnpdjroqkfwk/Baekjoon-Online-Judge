#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	int N, i, j, len;
	char S1[51] = { 0, };
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		char S[51] = { 0, };
		scanf("%s", S);
		if (i == 0)
		{
			len = strlen(S);
			for (j = 0; j < len; j++)
				S1[j] = S[j];
			continue;
		}
		for (j = 0; j < len; j++)
		{
			if (S[j] != S1[j])
				S1[j] = '?';
		}
	}
	printf("%s", S1);

	return 0;
}
*/
int main()
{
	int N, i, j, len;
	char S[51] = { 0, }, S1[51] = { 0, };
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		if (i == 0)
		{
			scanf("%s", S1);
			len = strlen(S1);
		}
		else
		{
			scanf("%s", S);
			for (j = 0; j < len; j++)
			{
				if (S[j] != S1[j])
					S1[j] = '?';
			}
		}
	}
	printf("%s", S1);
}