#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int main()
{
	int T, A, B, i, j, max;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		if (A > B)
			max = A;
		else
			max = B;
		for (j = max; ; j++)
		{
			if (j % A == 0 && j % B == 0)
			{
				printf("%d\n", j);
				break;
			}
		}
	}

	return 0;
}
*/
int main()
{
	int T, A, B, i, tmp, num_A, num_B;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		num_A = A;
		num_B = B;
		while (A % B != 0)
		{
			tmp = B;
			B = A % B;
			A = tmp;
		}
		// while 다 돌면 B가 최대공약수임 -> 유클리드 호제법
		// 최소공배수는 B * (num_A / B) * (num_B / B)
		printf("%d\n", num_A * num_B / B);
	}
}