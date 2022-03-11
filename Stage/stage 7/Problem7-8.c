#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int call(int n);

int main()
{
	char word[16];
	scanf("%s", &word);
	int len = strlen(word), i, time = 0;
	for (i = 0; i < len; i++)
	{
		time = time+call(word[i]);
	}
	printf("%d\n", time);

	return 0;
}

int call(int n)
{
	if (n >= 'A' && n <= 'C')
		return 3;
	else if (n >= 'D' && n <= 'F')
		return 4;
	else if (n >= 'G' && n <= 'I')
		return 5;
	else if (n >= 'J' && n <= 'L')
		return 6;
	else if (n >= 'M' && n <= 'O')
		return 7;
	else if (n >= 'P' && n <= 'S')
		return 8;
	else if (n >= 'T' && n <= 'V')
		return 9;
	else if (n >= 'W' && n <= 'Z')
		return 10;
}