#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int T, i, j, k, R;
	char S[20];
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %s", &R, &S);
		for (j = 0; j < strlen(S); j++)
		{
			for (k = 0; k < R; k++)
				printf("%c", S[j]);
		}
		printf("\n");
	}

	return 0;
}