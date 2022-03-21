#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
1. 그냥 배열에 숫자 자리 수 다 넣고 6 6 6이 연속으로 나오는 경우 찾음
2. 숫자의 자리 수를 뒤부터 줄여 나가면서 1000으로 나눈 나머지가 666이면 됨
3. 정수를 문자열로 변경 후 666이라는 문자열 찾기
속도 2 > 1 > 3
*/

// 그냥 배열에 숫자 자리 수 다 넣고 6 6 6이 연속으로 나오는 경우 찾음
/*
int main()
{
	int N, count = 0, tmp, num = 666;
	scanf("%d", &N);

	while (1)
	{
		int list[100] = { 0, }, i = 0;
		tmp = num;
		while (tmp > 0)
		{
			list[i] = tmp % 10;
			i++;
			tmp = tmp / 10;
		}
		for (int j = 0; j < i - 2; j++)
		{
			if (list[j] == 6 && list[j + 1] == 6 && list[j + 2] == 6)
			{
				count++;
				break;
			}
		}
		if (count == N)
		{
			printf("%d", num);
			break;
		}
		num++;
	}

	return 0;
}
*/
// 숫자의 자리 수를 뒤부터 줄여 나가면서 1000으로 나눈 나머지가 666이면 됨
int main()
{
	int N, count = 0, tmp, num = 666;
	scanf("%d", &N);

	while (1)
	{
		tmp = num;
		while (tmp >= 666)
		{
			if (tmp % 1000 == 666)
			{
				count++;
				break;
			}
			tmp = tmp / 10;
		}
		if (count == N)
		{
			printf("%d", num);
			break;
		}
		num++;
	}

	return 0;
}
// 정수를 문자열로 변경 후 666이라는 문자열 찾기
/*
int main()
{
	int N, num = 666, count = 0;
	char list[50];
	scanf("%d", &N);

	while (1)
	{
		sprintf(list, "%d", num);
		// list는 num을 문자열로 표현한 것
		// 정수를 문자열로 바꿀 때 sprintf 사용
		char *ptr = strstr(list, "666");
		// list 문자열에서 666이라는 문자열 찾기
		if (ptr != NULL)
			count++;
		// 666 문자열 찾으면 count++
		if (count == N)
		{
			printf("%d", num);
			break;
		}
		num++;
	}

	return 0;
}
*/