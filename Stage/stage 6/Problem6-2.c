#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
int d(int n);

int main()
{
	int i, arr[10000] = {0,};
	for (i = 0; i < 10000; i++)
	{
		if (d(i+1) <= 10000)
			arr[d(i+1)-1] = 1;
	}
	for (i = 0; i < 10000; i++)
	{
		if (arr[i] == 0)
			printf("%d\n", i+1);
	}

	return 0;
}

int d(int n)
{
	int result = n;
	while (n > 0)
	{
		result = result+(n%10);
		n = n/10;
	}

	return result;
}
*/
int arr[10000] = { 0, };

void func(int n)
{
	int i, tmp, ans;
	for (i = 1; i <= n; i++)
	{
		tmp = i;
		ans = i;
		while (tmp > 0)
		{
			ans += (tmp % 10);
			tmp /= 10;
		}
		arr[ans] = 1;
	}
	for (i = 1; i <= n; i++)
	{
		if (arr[i] == 0)
			printf("%d\n", i);
	}
}

int main()
{
	func(10000);

	return 0;
}