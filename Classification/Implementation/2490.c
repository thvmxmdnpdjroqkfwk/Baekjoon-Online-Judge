#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void result(int x)
{
	if (x == 3)
		printf("A\n");
	else if (x == 2)
		printf("B\n");
	else if (x == 1)
		printf("C\n");
	else if (x == 0)
		printf("D\n");
	else if (x == 4)
		printf("E\n");
}

int main()
{
	int i, j, n;
	for (i = 0; i < 3; i++)
	{
		int sum = 0;
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &n);
			sum += n;
		}
		result(sum);
	}
}