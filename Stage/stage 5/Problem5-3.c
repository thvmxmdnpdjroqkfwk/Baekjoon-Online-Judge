#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int A, B, C, n, i;
	int arr[10] = {0,};
	scanf("%d %d %d", &A, &B, &C);
	n = A*B*C;
	while (n > 0)
	{
		arr[n%10] = arr[n%10]+1;
		n = n/10;
	}
	for (i = 0; i < 10; i++)
		printf("%d\n", arr[i]);

	return 0;
}