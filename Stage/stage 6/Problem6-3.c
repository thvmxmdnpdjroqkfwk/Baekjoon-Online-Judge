#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num_AP();

int main()
{
	int N;
	scanf("%d", &N);
	printf("%d",num_AP(N));

	return 0;
}

int num_AP(int n)
{
	int i, count = 0, num_1, num_10, num_100;
	for (i = 1; i <= n; i++)
	{
		if (i < 100)
			count++;
		else
		{
			num_1 = i%10;
			num_10 = (i/10)%10;
			num_100 = i/100;
			if (num_1-num_10 == num_10-num_100)
				count++;
		}
	}

	return count;
}

// N이 1000 넘어갈 때를 고려하면??
// 55번째 줄에서 i = i / 10;을 사용하면 i가 10보다 작은 경우에 while문을 종료하지만
// i가 작은 수로 변했기 때문에 맨 밖의 for문도 앞에서부터 다시 반복하게 됨
// 그래서 num을 45번째 줄에서 따로 지정해줌
/*
int num_AP(int n)
{
	int i, count = 0;
	for (i = 1; i <= n; i++)
	{
		int num = i;
		if (i < 100)
			count++;
		else
		{
			int j = 0, arr[10], num_dif = 0;
			while (num >= 10)
			{
				arr[j] = (num % 10) - (num / 10) % 10;
				j++;
				num = num / 10;
				num_dif++;
			}
			int k, compare = 0;
			for (k = 1; k < num_dif; k++)
			{
				if (arr[0] == arr[k])
					compare++;
			}
			if (compare == num_dif-1)
				count++;
		}
	}

	return count;
}
*/