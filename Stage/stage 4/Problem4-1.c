#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B;
	while (1)
	{
		scanf("%d %d", &A, &B);
		if ((A != 0) || (B != 0))
			printf("%d\n", A + B);
		else
			break;
	}

	return 0;
}

// 초깃값 선언을 통한 코딩 (위는 아님)
/*
int main()
{
	int A, B;
	A = 1; B = 1;
	while (A+B != 0)
	{
		scanf("%d %d", &A, &B);
		if (A+B != 0)
			printf("%d\n", A+B);
	}

	return 0;
}
*/