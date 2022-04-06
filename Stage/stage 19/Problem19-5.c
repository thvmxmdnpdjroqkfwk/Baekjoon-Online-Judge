#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int D[20002] = { 0, }, a = 10000, b = 10001;

void push_front(int X)
{
	D[a] = X;
	a--;
}

void push_back(int X)
{
	D[b] = X;
	b++;
}

void pop_front()
{
	if (b - a == 1)
		printf("-1\n");
	else if (b - a > 1)
	{
		a++;
		printf("%d\n", D[a]);
		D[a] = 0;
	}
}

void pop_back()
{
	if (b - a == 1)
		printf("-1\n");
	else if (b - a > 1)
	{
		b--;
		printf("%d\n", D[b]);
		D[b] = 0;
	}
}

void size()
{
	printf("%d\n", b - a - 1);
}

void empty()
{
	if (b - a == 1)
		printf("1\n");
	else if (b - a > 1)
		printf("0\n");
}

void front()
{
	if (b - a == 1)
		printf("-1\n");
	else if (b - a > 1)
		printf("%d\n", D[a + 1]);
}

void back()
{
	if (b - a == 1)
		printf("-1\n");
	else if (b - a > 1)
		printf("%d\n", D[b - 1]);
}

int main()
{
	int N, i, n;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		char S[12] = { 0, };
		scanf("%s", &S);
		if (strcmp(S, "push_front") == 0)
		{
			scanf("%d", &n);
			push_front(n);
		}
		else if (strcmp(S, "push_back") == 0)
		{
			scanf("%d", &n);
			push_back(n);
		}
		else if (strcmp(S, "pop_front") == 0)
			pop_front();
		else if (strcmp(S, "pop_back") == 0)
			pop_back();
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