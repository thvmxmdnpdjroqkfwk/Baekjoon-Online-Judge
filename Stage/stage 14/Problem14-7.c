#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// pick에다 연산자를 넣어줌 (백트래킹으로)
int pick[10] = { 0, }, num[11] = { 0, }, op[4] = { 0, }, min = 1000000000, max = -1000000000;
void back(int arr1[], int arr2[], int a, int b)
{
	int i;
	if (b == a - 1)
	{
		int ans = num[0];
		for (i = 1; i < a; i++)
		{
			if (pick[i - 1] == '+')
				ans += num[i];
			else if (pick[i - 1] == '-')
				ans -= num[i];
			else if (pick[i - 1] == '*')
				ans *= num[i];
			else if (pick[i - 1] == '/')
				ans /= num[i];
		}
		if (min > ans)
			min = ans;
		if (max < ans)
			max = ans;
	}
	else
	{
		for (i = 0; i < 4; i++)
		{
			if (op[i] > 0)
			{
				if (i == 0)
				{
					pick[b] = '+';
					op[i]--;
					back(arr1, arr2, a, b + 1);
					pick[b] = 0;
					op[i]++;
				}
				else if (i == 1)
				{
					pick[b] = '-';
					op[i]--;
					back(arr1, arr2, a, b + 1);
					pick[b] = 0;
					op[i]++;
				}
				else if (i == 2)
				{
					pick[b] = '*';
					op[i]--;
					back(arr1, arr2, a, b + 1);
					pick[b] = 0;
					op[i]++;
				}
				else if (i == 3)
				{
					pick[b] = '/';
					op[i]--;
					back(arr1, arr2, a, b + 1);
					pick[b] = 0;
					op[i]++;
				}
			}
		}
	}
}
int main()
{
	int N, i;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &num[i]);
	for (i = 0; i < 4; i++)
		scanf("%d", &op[i]);
	back(num, op, N, 0);
	printf("%d\n%d", max, min);
}