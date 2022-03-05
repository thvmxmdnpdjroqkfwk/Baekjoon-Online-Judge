#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, new, cycle;
	scanf("%d", &N);
	cycle = 0;
	new = N;
	while (1)
	{
		new = (((new/10)+(new%10))%10)+((new%10)*10);
		cycle = cycle + 1;
		if (new == N)
			break;
	}
	printf("%d", cycle);

	return 0;
}