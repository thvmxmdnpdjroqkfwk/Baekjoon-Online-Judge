#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (C > B)
		printf("%d", A/(C-B)+1);
	else
		printf("%d", -1);

	return 0;
}