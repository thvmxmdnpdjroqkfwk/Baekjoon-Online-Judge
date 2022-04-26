#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int main()
{
	char S[101];
	scanf("%s", &S);
	int len = strlen(S), i, j, A = len / 10, B = len % 10;
	for (i = 0; i < A; i++)
	{
		for (j = 0; j < 10; j++)
			printf("%c", S[j + i * 10]);
		printf("\n");
	}
	for (i = A * 10; i < A * 10 + B; i++)
		printf("%c", S[i]);

	return 0;
}
*/
int main()
{
	char S[101];
	scanf("%s", &S);
	int len = strlen(S), i;
	for (i = 0; i < len; i++)
	{
		printf("%c", S[i]);
		if (i % 10 == 9)
			printf("\n");
	}

	return 0;
}