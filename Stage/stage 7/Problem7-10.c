#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char word[105];
	int N, i, count = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", &word);
		int j, len = strlen(word);
		for (j = 0; j < len; j++)
		{
			int check = 0;
			if (word[j] != word[j+1])
			{
				int k;
				for (k = j + 2; k < len; k++)
				{
					if (word[j] == word[k])
					{
						count++;
						check++;
						break;
					}
				}
			}
			if (check == 1)
				break;
		}
	}
	printf("%d", N-count);

	return 0;
}