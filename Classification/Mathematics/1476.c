#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int E, S, M, i;
	scanf("%d %d %d", &E, &S, &M);
	int Ec = 1, Sc = 1, Mc = 1;
	for (i = 1; ; i++)
	{
		if (Ec == 16)
			Ec = 1;
		if (Sc == 29)
			Sc = 1;
		if (Mc == 20)
			Mc = 1;
		if (E == Ec && S == Sc && M == Mc)
		{
			printf("%d", i);
			break;
		}
		Ec++;
		Sc++;
		Mc++;
	}

	return 0;
}