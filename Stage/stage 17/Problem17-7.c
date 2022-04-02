#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 이항계수 nCk = n!/(k!(n-k)!)
/*
int fac(int num)
{
	int i, ans = 1;
	for (i = 2; i <= num; i++)
		ans *= i;
	return ans;
}

int main()
{
	int N, K;
	scanf("%d %d", &N, &K);
	printf("%d", fac(N) / (fac(K) * fac(N - K)));
	return 0;
}
*/
// n 5, k 2  12345 / 12 123             n-k+1 ~ n / 1 ~ k
// n 6, k 2  123456 / 12 1234
// n 7, k 2  1234567 / 12 12345
int main()
{
	int N, K, i, ans = 1;
	scanf("%d %d", &N, &K);
	for (i = N - K + 1; i <= N; i++)
		ans *= i;
	for (i = 1; i <= K; i++)
		ans /= i;
	printf("%d", ans);
	return 0;
}