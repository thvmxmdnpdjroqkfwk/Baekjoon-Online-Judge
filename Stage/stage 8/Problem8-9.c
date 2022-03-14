#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	long x, y, T, i, add = 1, count = 1, a = 1, b = 0;
	scanf("%ld", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%ld %ld", &x, &y);
		while (y - x > add)
		{
			if (add % a == 0)
			{
				b++;
				count++;
			}
			if (b == 2)
			{
				a++;
				b = 0;
			}
			add++;
		}
		printf("%ld\n", count);
	}

	return 0;
}


// 이게 제일 짧음 그리고 int로 하면 오버플로우 생길 수 있으니 long으로 하자
/*
int main()
{
	long i, T, x, y;
	scanf("%ld", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%ld %ld", &x, &y);
		long df = y - x, j = round(sqrt(df));
		if (j * j < df && df <= (j + 1) * (j + 1) - (j + 1))
			printf("%ld\n", 2 * j);
		else if (j * j >= df && df > j * j - j)
			printf("%ld\n", 2 * j - 1);
	}

	return 0;
}
*/

/*
int main()
{
	int T, x, y, temp, root;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &x, &y);
		root = sqrt(y - x);
		if (y - x == root * root)
			printf("%d\n", 2 * root - 1);
		else if (y - x > root * (root + 1))
			printf("%d\n", 2 * root + 1);
		else
			printf("%d\n", 2 * root);
	}
}
*/
/*
int main()
{
	int T;
	scanf("%d", &T);

	int i;
	for (i = 0; i < T; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);

		int j, k, add = 1, cp = 0, ans = 0;
		while (1)
		{
			for (j = 0; j < 2; j++)
			{
				for (k = 0; k < add; k++)
					cp++;
				ans++;
				if (cp >= y-x)
					break;
			}
			if (cp >= y-x)
				break;
			add++;
		}
		printf("%d\n", ans);
	}

	return 0;
}
*/