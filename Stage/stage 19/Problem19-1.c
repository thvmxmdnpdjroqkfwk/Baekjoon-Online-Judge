#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int Q[2000000] = { 0, }, i = 0, j = 0;

void push(int X)
{
	Q[j] = X;
	j++;
}

void pop()
{
	if (i == j)
		printf("-1\n");
	else
	{
		printf("%d\n", Q[i]);
		i++;
	}
}

void size()
{
	printf("%d\n", j - i);
}

void empty()
{
	if (i == j)
		printf("1\n");
	else
		printf("0\n");
}

void front()
{
	if (i == j)
		printf("-1\n");
	else
	{
		printf("%d\n", Q[i]);
	}
}

void back()
{
	if (i == j)
		printf("-1\n");
	else
	{
		printf("%d\n", Q[j - 1]);
	}
}

int main()
{
	int N, k, n;
	scanf("%d", &N);
	for (k = 0; k < N; k++)
	{
		char S[6] = { 0, };
		scanf("%s", &S);
		if (strcmp(S, "push") == 0)
		{
			scanf("%d", &n);
			push(n);
		}
		else if (strcmp(S, "pop") == 0)
			pop();
		else if (strcmp(S, "size") == 0)
			size();
		else if (strcmp(S, "empty") == 0)
			empty();
		else if (strcmp(S, "front") == 0)
			front();
		else if (strcmp(S, "back") == 0)
			back();
	}

	return 0;
}