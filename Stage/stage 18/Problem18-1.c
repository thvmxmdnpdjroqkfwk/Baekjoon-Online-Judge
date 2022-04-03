#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int stack[10001] = { 0, }, in = 0;

void push(int X)
{
	stack[in] = X;
	in++;
}

void pop(void)
{
	if (in == 0)
		printf("-1\n");
	else
	{
		in--;
		printf("%d\n", stack[in]);
		stack[in] = 0;
	}
}

void size(void)
{
	printf("%d\n", in);
}

void empty(void)
{
	if (in == 0)
		printf("1\n");
	else
		printf("0\n");
}

void top(void)
{
	if (in == 0)
		printf("-1\n");
	else
		printf("%d\n", stack[in-1]);
}

int main()
{
	int N, i, X;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		char cmd[6] = { 0, };
		scanf("%s", &cmd);
		if (strcmp(cmd, "push") == 0)
		{
			scanf("%d", &X);
			push(X);
		}
		else if (strcmp(cmd, "pop") == 0)
			pop();
		else if (strcmp(cmd, "size") == 0)
			size();
		else if (strcmp(cmd, "empty") == 0)
			empty();
		else if (strcmp(cmd, "top") == 0)
			top();
	}

	return 0;
}