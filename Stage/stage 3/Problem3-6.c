#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = N; i > 0; i--)
		printf("%d\n", i);

	return 0;
}

// i++ 이용 (위에는 i-- 이용)
/*
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		printf("%d\n", N-i);

	return 0;
}
*/