#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int P, i, Q;
	scanf("%d", &P);
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &Q);
		P -= Q;
	}
	printf("%d", P);

	return 0;
}