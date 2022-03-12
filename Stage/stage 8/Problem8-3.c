#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int X, i = 1, n = 1;
	scanf("%d", &X);
	while (X >= n)
	{
		n = n+i;
		i++;
	}
	if (i%2 == 0)
		printf("%d/%d", n-X, X-(n-i));
	else
		printf("%d/%d", X-(n-i), n-X);

	return 0;
}