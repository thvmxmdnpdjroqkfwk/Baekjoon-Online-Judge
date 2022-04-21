#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A[8], i, asc = 0, des = 0;
	for (i = 0; i < 8; i++)
	{
		scanf("%d", &A[i]);
		if (A[i] == i + 1)
			asc++;
		else if (A[i] == 8 - i)
			des++;
	}
	if (asc == 8)
		printf("ascending");
	else if (des == 8)
		printf("descending");
	else
		printf("mixed");

	return 0;
}