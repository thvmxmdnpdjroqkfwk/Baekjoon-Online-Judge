#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int main()
{
	char S[101];
	scanf("%s", S);
	printf("%d", strlen(S));

	return 0;
}
*/
int main()
{
	char S[101] = { 0, };
	scanf("%s", S);
	int i = 0;
	while (S[i] != 0)
		i++;
	printf("%d", i);

	return 0;
}