#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int Q[5050] = { 0, };
int main()
{
	int N, M, i, j, n[50] = { 0, };
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
		Q[i + 2500] = i + 1;
	for (i = 0; i < M; i++)
		scanf("%d", &n[i]);
	int a = 2500, b = 2499 + N, cnt = b - a + 1, ans = 0;
	for (i = 0; i < M; i++)
	{
		int is = 0;
		for (j = a; j < a + cnt / 2 + 1; j++)
		{
			if (Q[j] == n[i])
			{
				is = 1;
				break;
			}
		}
		if (is == 1) // is가 1이면 앞에 있는거를 뒤로
		{
			while (1)
			{
				if (Q[a] == n[i])
				{
					Q[a] = 0;
					cnt--;
					a++;
					break;
				}
				b++;
				Q[b] = Q[a];
				Q[a] = 0;
				a++;
				ans++;
			}
		}
		else if (is == 0) // is가 0이면 뒤에 있는거를 앞으로
		{
			while (1)
			{
				if (Q[a] == n[i])
				{
					Q[a] = 0;
					cnt--;
					a++;
					break;
				}
				a--;
				Q[a] = Q[b];
				Q[b] = 0;
				b--;
				ans++;
			}
		}
	}
	printf("%d", ans);

	return 0;
}
*/
// 10 1 3 4 5 6 7 8   8개 중 5개까지는 앞으로 해야 됨
// 1 2 3 4 5 6 7      7개 중 4개까지는 앞으로 해야 됨
// 개수/2+1개까지 앞에서 뒤로 넘기기!

// 위에꺼 간략하게 줄임
int Q[5050] = { 0, };
int main()
{
	int N, M, i, j, n[50] = { 0, };
	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
		Q[i + 2500] = i + 1;
	for (i = 0; i < M; i++)
		scanf("%d", &n[i]);
	int a = 2500, b = 2499 + N, cnt = b - a + 1, ans = 0;
	for (i = 0; i < M; i++)
	{
		int is = 0;
		for (j = a; j < a + cnt / 2 + 1; j++)
		{
			if (Q[j] == n[i])
			{
				is = 1;
				break;
			}
		}
		if (is == 1)
		{
			while (Q[a] != n[i])
			{
				b++;
				Q[b] = Q[a];
				Q[a] = 0;
				a++;
				ans++;
			}
		}
		else if (is == 0)
		{
			while (Q[a] != n[i])
			{
				a--;
				Q[a] = Q[b];
				Q[b] = 0;
				b--;
				ans++;
			}
		}
		Q[a] = 0;
		cnt--;
		a++;
	}
	printf("%d", ans);
}