#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	while (1)
	{
		char S, stack[101] = { 0, }, i = 0, a = 0, j = 0;
		while (1)
		{
			S = getchar();
			if (S == '.')
				break;
			if (S == '(')
			{
				stack[i] = '(';
				i++;
			}
			else if (S == '[')
			{
				stack[i] = '[';
				i++;
			}
			else if (S == ')')
			{
				if (i == 0)
					a = 1;
				else
				{
					i--;
					if (stack[i] == '[')
					{
						a = 1;
						stack[i] = 0;
					}
					else if (stack[i] == '(')
						stack[i] = 0;
				}
			}
			else if (S == ']')
			{
				if (i == 0)
					a = 1;
				else
				{
					i--;
					if (stack[i] == '(')
					{
						a = 1;
						stack[i] = 0;
					}
					else if (stack[i] == '[')
						stack[i] = 0;
				}
			}
			if (S != '\n')
				j++;
		}
		if (j == 0)
			break;
		else if (i == 0 && a == 0)
			printf("yes\n");
		else
			printf("no\n");
	}

	return 0;
}