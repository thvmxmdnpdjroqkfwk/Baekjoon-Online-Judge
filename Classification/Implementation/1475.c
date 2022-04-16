#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

// string으로 풀기
/*
int num[9] = { 0, };
void count(char n)
{
	if (n == '0')
		num[0]++;
	else if (n == '1')
		num[1]++;
	else if (n == '2')
		num[2]++;
	else if (n == '3')
		num[3]++;
	else if (n == '4')
		num[4]++;
	else if (n == '5')
		num[5]++;
	else if (n == '6' || n == '9')
		num[6]++;
	else if (n == '7')
		num[7]++;
	else if (n == '8')
		num[8]++;
}
int main()
{
	char S[8];
	scanf("%s", S);
	int len = strlen(S), i, max = 0;
	for (i = 0; i < len; i++)
		count(S[i]);
	num[6] = ceil((double)num[6] / 2);
	for (i = 0; i < 9; i++)
	{
		if (num[i] > max)
			max = num[i];
	}
	printf("%d", max);

	return 0;
}
*/
// 6이랑 9는 1세트로 2개 표현 가능
// ceil((6,9개수)/2)  ->  7개면 4세트, 8개면 4세트

// 정수를 한 자리씩 쪼개면서 풀기
int main()
{
	int N, cnt[9] = { 0, }, i, max = 0;
	scanf("%d", &N);
	while (N > 0)
	{
		if (N % 10 == 9)
			cnt[6]++;
		else
			cnt[N % 10]++;
		N /= 10;
	}
	cnt[6] = ceil((double)cnt[6] / 2);
	for (i = 0; i < 9; i++)
	{
		if (cnt[i] > max)
			max = cnt[i];
	}
	printf("%d", max);
}


