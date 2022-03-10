#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int i, len, count = 0;
	char S[1000000];
	scanf("%[^\n]s", &S);
	len = strlen(S);
	for (i = 0; i < len; i++)
	{
		if (S[i] == ' ')
			count++;
	}
	if (S[0] == ' ')
		count--;
	if (S[len-1] == ' ')
		count--;
	printf("%d", count+1);

	return 0;
}

// 공백이 여러 개일 때도 가능하도록 만듦
/*
int main()
{
	int i, len, count = 0;
	char S[1000001];
	scanf("%[^\n]s", &S);
	len = strlen(S);
	for (i = 0; i < len; i++)
	{
		if (S[i] != ' ' && S[i+1] == ' ')
			count++;
	}
	if (S[len-1] != ' ')
		printf("%d", count+1);
	else
		printf("%d", count);

	return 0;
}
*/