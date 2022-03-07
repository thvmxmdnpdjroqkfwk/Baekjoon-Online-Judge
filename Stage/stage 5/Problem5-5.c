#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int N, i, score, max = 0;
	float avg, total = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &score);
		total = total+score;
		if (score >= max)
			max = score;
	}
	avg = (total/N)/max*100;
	printf("%f", avg);

	return 0;
}

// 배열 사용하기
/*
int main()
{
	int N, i, score, max = 0, list[1000];
	float avg, total = 0.0f;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &score);
		list[i] = score;
		if (score >= max)
			max = score;
	}
	for (i = 0; i < N; i++)
		total = total+list[i];
	avg = (total/max)*100/N;
	printf("%f", avg);

	return 0;
}
*/