#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, cnt = 0;
	for (i = 0; i < 8; i++)
	{
		char A[9] = { 0, };
		scanf("%s", A);
		for (j = 0; j < 8; j++)
		{
			if (A[j] == 'F')
			{
				if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
					cnt++;
			}
		}
	}
	printf("%d", cnt);

	return 0;
}
// (i%2==0 && j%2==0) || (i%2==1 && j%2==1) -> 흰색