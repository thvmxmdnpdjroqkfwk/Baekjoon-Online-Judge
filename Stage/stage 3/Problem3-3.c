#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, sum;
	scanf("%d", &n);
	sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + i;
	printf("%d", sum);

	return 0;
}

// 1부터 n까지의 합 공식 이용 (위에는 for문 이용)
/*
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", n*(n+1)/2);

	return 0;
}
*/