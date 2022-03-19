#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pbnc(int n)
{
	if (n > 1)
		return pbnc(n - 1) + pbnc(n - 2);
	else
		return n;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", pbnc(n));
}




/*
int main()
{
	//int A = 0, B = 1, n, i, tmp;
	//scanf("%d", &n);
	//for (i = 1; i <= n; i++)
	//{
	//	tmp = B;
	//	B = A + B;
	//	A = tmp;
	//}
	//printf("%d", A);
	

	// 배열 이용
	int list[25] = { 0, }, n, i;
	list[1] = 1;
	scanf("%d", &n);
	for (i = 0; i < n-1; i++)
		list[i + 2] = list[i] + list[i + 1];
	printf("%d", list[n]);

	return 0;
}
*/