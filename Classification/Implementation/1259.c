#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	for (int i = 0; ; i++)
	{
		char S[6] = { 0, };
		scanf("%s", S);
		if (S[0] == '0')
			break;
		int len = strlen(S), a = 0, b = len - 1, cnt = 0;
		while (S[a] == S[b] && a < b)
		{
			a++;
			b--;
			cnt++;
		}
		if (cnt == len / 2)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}