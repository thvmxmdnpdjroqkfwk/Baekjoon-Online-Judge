#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int A, int B)
{
	int tmp;
	while (A % B != 0)
	{
		tmp = B;
		B = A % B;
		A = tmp;
	}
	return B;
}

int main()
{
	/*
	int N, i, list[100] = { 0, }, div;
	scanf("%d", &N);
	scanf("%d", &list[0]);
	for (i = 1; i < N; i++)
	{
		scanf("%d", &list[i]);
		div = gcd(list[0], list[i]);
		printf("%d/%d\n", list[0] / div, list[i] / div);
	}
	*/
	int N, i, list[100] = { 0, }, div;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &list[i]);
	for (i = 1; i < N; i++)
	{
		div = gcd(list[0], list[i]);
		printf("%d/%d\n", list[0] / div, list[i] / div);
	}
	return 0;
}