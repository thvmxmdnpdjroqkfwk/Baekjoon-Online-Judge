#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char S[101] = { 0, }, ans[26] = { 0, };
	scanf("%s", S);
	int i, len = strlen(S);
	for (i = 0; i < len; i++)
		ans[S[i] - 'a']++;
	for (i = 0; i < 26; i++)
		printf("%d ", ans[i]);

	return 0;
}