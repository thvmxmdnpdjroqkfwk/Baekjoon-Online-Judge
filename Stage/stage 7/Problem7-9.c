#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char word[101];
	scanf("%s", &word);
	int count = 0, len = strlen(word), i;
	for (i = 0; i < len; i++)
	{
		if (word[i] == 'c' && (word[i+1] == '=' || word[i+1] == '-'))
		{
			count++;
		}
		else if (word[i] == 'd'&& (word[i+1] == '-' || (word[i+1] == 'z' && word[i+2] == '=')))
		{
			count++;
		}
		else if ((word[i] == 'l' || word[i] == 'n') && word[i+1] == 'j')
		{
			count++;
		}
		else if ((word[i] == 's' || word[i] == 'z') && word[i+1] == '=')
		{
			count++;
		}
	}
	printf("%d", len-count);

	return 0;
}