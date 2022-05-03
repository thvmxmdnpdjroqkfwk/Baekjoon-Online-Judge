#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int h = C / 60, m = C % 60, H = 0, M;
	if (B + m >= 60)
	{
		M = B + m - 60;
		H += 1;
	}
	else
		M = B + m;
	if (A + h + H >= 24)
		H += A + h - 24;
	else
		H += A + h;
	printf("%d %d", H, M);

	return 0;
}