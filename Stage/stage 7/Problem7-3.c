#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int i, j;
	char S[100];
	scanf("%s", S);
	for (i = 0; i < 26; i++)
	{
		int check = 0;
		for (j = 0; j < strlen(S); j++)
		{
			if (S[j] == i+97)
			{
				printf("%d ", j);
				check++;
				break;
			}
		}
		if (check == 0)
			printf("%d ", -1);
	}

	return 0;
}