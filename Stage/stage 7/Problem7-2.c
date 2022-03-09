#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, sum = 0;
	char num[100];
	scanf("%d", &N);
	scanf("%s", &num);
	for (int i = 0; i < N; i++)
		sum = sum+(num[i]-48);
	printf("%d", sum);

}