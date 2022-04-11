#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
int arr[100000000] = { 0, };
int main()
{
	int T, i, j, k, n;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		char p[100001] = { 0, };
		scanf(" %s", p);
		scanf(" %d", &n);
		int a = 0, b = n - 1, len = strlen(p), cnt = 0, tmp;
		scanf(" %c", &tmp); // [ 입력받기
		for (j = 0; j < n; j++)
			scanf(" %d%c", &arr[j], &tmp); // , or ] 무시하기
		if (n == 0)
			b = 0;
		for (j = 0; j < len; j++)
		{
			int c = b, num = b - a;
			if (p[j] == 'R')
			{
				a = b;
				for (k = 0; k < num; k++)
				{
					b++;
					c--;
					arr[b] = arr[c];
					arr[c] = 0;
				}
			}
			else if (p[j] == 'D')
			{
				if (arr[a] == 0)
				{
					cnt = 1;
					break;
				}
				arr[a] = 0;
				a++;
			}
		}
		if (cnt == 1)
			printf("error\n");
		else if (cnt == 0)
		{
			if (arr[b] == 0)
				printf("[]\n");
			else
			{
				printf("[");
				for (j = a; j < b; j++)
					printf("%d,", arr[j]);
				printf("%d]\n", arr[b]);
			}
		}
		for (j = a; j <= b; j++)
			arr[j] = 0;
	}

	return 0;
}
*/
int main()
{
	int T, i, j, k, n;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		int arr[100001] = { 0, };
		char p[100001] = { 0, };
		scanf(" %s", p);
		scanf(" %d", &n);
		int a = 0, b = n - 1, len = strlen(p), tmp, cnt = n, is = 0, hj = 0;
		scanf(" %c", &tmp); // [ 입력받기
		if (n == 0)
		{
			b = 0;
			scanf(" %c", &tmp); // ] 입력받기
		}
		for (j = 0; j < n; j++)
			scanf(" %d%c", &arr[j], &tmp); // , or ] 무시하기
		for (j = 0; j < len; j++)
		{
			if (p[j] == 'R')
			{
				tmp = a;
				a = b;
				b = tmp;
				hj++;            // hj는 R을 한 횟수
			}
			else if (p[j] == 'D')
			{
				if (arr[a] == 0)
				{
					is = 1; // error
					break;
				}
				cnt--;
				if (hj % 2 == 0) // hj 짝수이면 a ~ b
					a++;
				else             // hj 홀수이면 b ~ a
					a--;
			}
		}
		if (is == 1)
			printf("error\n");
		else
		{
			if (cnt == 0)
				printf("[]\n");
			else
			{
				printf("[");
				if (hj % 2 == 0)
				{
					for (j = a; j < b; j++)
						printf("%d,", arr[j]);
					printf("%d]\n", arr[b]);
				}
				else
				{
					for (j = a; j > b; j--)
						printf("%d,", arr[j]);
					printf("%d]\n", arr[b]);
				}
			}
		}
	}
}



