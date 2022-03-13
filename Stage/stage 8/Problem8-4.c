#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
/*
int main()
{
	int position = 0, A, B, V, i = 1;
	scanf("%d %d %d", &A, &B, &V);
	while (1)
	{
		position = position+A;
		if (position >= V)
			break;
		position = position-B;
		i++;
	}
	printf("%d", i);

	return 0;
}
*/
int main()
{
	double A, B, V;
	scanf("%lf %lf %lf", &A, &B, &V);
	printf("%.0lf", ceil((V-B)/(A-B)));
}