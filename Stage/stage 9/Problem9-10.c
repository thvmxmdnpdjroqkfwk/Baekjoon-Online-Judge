#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int R;
	const double p = 3.14159265359;
	scanf("%d", &R);
	printf("%f\n", p*R*R);
	printf("%f", 2.0*R*R);

	return 0;
}