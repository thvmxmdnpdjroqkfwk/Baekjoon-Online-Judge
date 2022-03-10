#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A, B, inv_A, inv_B;
	scanf("%d %d", &A, &B);
	inv_A = A/100+((A/10)%10)*10+(A%10)*100;
	inv_B = B/100+((B/10)%10)*10+(B%10)*100;
	if (inv_A > inv_B)
		printf("%d", inv_A);
	else if (inv_A < inv_B)
		printf("%d", inv_B);

	return 0;
}

// 문자열 사용하기
/*
int main()
{
	int i;
	char A[4], B[4], temp;
	scanf("%s %s", &A, &B);
	temp = A[0];
	A[0] = A[2];
	A[2] = temp;
	temp = B[0];
	B[0] = B[2];
	B[2] = temp;
	if (A[0] > B[0])
	{
		for (i = 0; i < 3; i++)
			printf("%c", A[i]);
	}
	else if (A[0] == B[0])
	{
		if (A[1] > B[1])
		{
			for (i = 0; i < 3; i++)
				printf("%c", A[i]);
		}
		else if (A[1] == B[1])
		{
			if (A[2] >= B[2])
			{
				for (i = 0; i < 3; i++)
					printf("%c", A[i]);
			}
			else
			{
				for (i = 0; i < 3; i++)
					printf("%c", B[i]);
			}
		}
		else
		{
			for (i = 0; i < 3; i++)
				printf("%c", B[i]);
		}
	}
	else
	{
		for (i = 0; i < 3; i++)
			printf("%c", B[i]);
	}
	return 0;
}
*/