#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int N;
	scanf("%d", &N);
	int x = 0, max_x = 0;
	while (N >= 5*x)
	{
		if ((N-5*x)%3 == 0)
			max_x = x;
		x++;
	}
	if ((N-5*max_x)%3 != 0)
		printf("%d", -1);
	else
		printf("%d", max_x+(N-5*max_x)/3);

	return 0;
}