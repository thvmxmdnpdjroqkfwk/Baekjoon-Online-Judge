#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

int main()
{
	int num, i, j;
	char check[80];
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		int score = 0, result = 0;
		scanf("%s", &check);
		for (j = 0; j < strlen(check); j++)
		{
			if (check[j] == 'O')
				score++;
			else
				score = 0;
			result = result+score;
		}
		printf("%d\n", result);
	}

	return 0;
}