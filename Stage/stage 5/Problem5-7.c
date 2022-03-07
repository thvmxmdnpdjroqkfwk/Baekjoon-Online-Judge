#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int C, i, j, N, list[1000];
	float avg, percentage;
	scanf("%d", &C);
	for (i = 0; i < C; i++)
	{
		float count = 0.0f, total = 0.0f;
		scanf("%d", &N);
		for (j = 0; j < N; j++)
		{
			scanf("%d", &list[j]);
			total = total+list[j];
		}
		avg = total/N;
		for (j = 0; j < N; j++)
		{
			if (list[j] > avg)
				count = count+1;
		}
		percentage = count/N*100;
		printf("%.3f%%\n", percentage);
	}

	return 0;
}