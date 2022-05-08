#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int L, P, A[6] = { 0, }, i;
	scanf("%d %d", &L, &P);
	int N = L * P;
	for (i = 0; i < 5; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < 5; i++)
		printf("%d ", A[i] - N);

	return 0;
}