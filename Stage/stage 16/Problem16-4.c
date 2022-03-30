#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char equation[51] = { 0, };
	scanf("%s", &equation);
	int i = 0, len = strlen(equation), ans = 0, count = 0, sig = 0, j = 0;
	while (i < len)
	{
		char num[6] = { 0, };
		while (1)
		{
			if (i == len || equation[i] == '-' || equation[i] == '+')
				break;
			num[j] = equation[i];
			i++;
			j++;
		}
		int number = atoi(num);
		if (sig == 0)
			ans += number;
		else
			ans -= number;
		if (equation[i] == '+')
		{
			if (count == 0)
				sig = 0;
			else
				sig = 1;
		}
		else if (equation[i] == '-')
		{
			sig = 1;
			count++;
		}
		j = 0;
		i++;
	}
	printf("%d", ans);

	return 0;
}