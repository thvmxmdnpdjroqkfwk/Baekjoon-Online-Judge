#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int i, j, input;
	int arr[10] = {0,};
	int count = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &input);
		arr[i] = input%42;
	}
	for (i = 0; i < 10; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			if (arr[i] == arr[j])
			{
				count = count+1;
				break;
			}
		}
	}
	printf("%d", 10-count);

	return 0;
}

// 1 1 0 0 5 6 7 8 9 9를 예시로 들면 정답은 7!
/*
int main()
{
	int i, j, input;
	int arr[10] = {0,};
	int ans = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &input);
		arr[i] = input % 42;
	}
	for (i = 0; i < 10; i++)
	{
		int count = 0;
		for (j = i + 1; j < 10; j++)
		{
			if (arr[i] == arr[j])
				count = count+1;
		}
		if (count == 0)
			ans = ans+1;
	}
	printf("%d", ans);

	return 0;
}
*/