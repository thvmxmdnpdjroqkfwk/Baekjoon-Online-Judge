#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
struct word
{
	char S[51];
	int len;
};
struct word list[20001] = { 0, };
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", list[i].S);
		list[i].len = strlen(list[i].S);
	}
	for (int i = 1; i < N; i++)
	{
		struct word tmp;
		tmp = list[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (list[j].len > tmp.len)
			{
				list[j + 1] = list[j];
				list[j] = tmp;
			}
			else if (list[j].len == tmp.len)
			{
				if (strcmp(list[j].S, tmp.S) > 0)
				{
					list[j + 1] = list[j];
					list[j] = tmp;
				}
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (strcmp(list[i].S, list[i + 1].S) != 0)
			printf("%s\n", list[i].S);
	}
}
/*
int main()
{
	int N, i, j;
	char S[20000][51] = { 0, };
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%s", S[i]);
	for (i = 1; i < N; i++)
	{
		char tmp[51] = { 0, };
		int len_pick = strlen(S[i]);
		strcpy(tmp, S[i]);
		for (j = i - 1; j >= 0; j--)
		{
			int len = strlen(S[j]);
			if (len > len_pick)
			{
				strcpy(S[j + 1], S[j]);
				strcpy(S[j], tmp);
			}
			else if (len == len_pick)
			{
				if (strcmp(S[j], tmp) > 0)
				{
					strcpy(S[j + 1], S[j]);
					strcpy(S[j], tmp);
				}
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		if (strcmp(S[i], S[i + 1]) != 0)
			printf("%s\n", S[i]);
	}

	return 0;
}
/////////////////////////////////////////////////////////////////
int L[20000] = { 0, };
int main()
{
	int N, i, j;
	char S[20000][51] = { 0, };
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", S[i]);
		L[i] = strlen(S[i]);
	}
	for (i = 1; i < N; i++)
	{
		char tmp[51] = { 0, };
		strcpy(tmp, S[i]);
		int tmp_len = L[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (L[j] > tmp_len)
			{
				L[j + 1] = L[j];
				L[j] = tmp_len;
				strcpy(S[j + 1], S[j]);
				strcpy(S[j], tmp);
			}
			else if (tmp_len == L[j])
			{
				if (strcmp(S[j], tmp) > 0)
				{
					L[j + 1] = L[j];
					L[j] = tmp_len;
					strcpy(S[j + 1], S[j]);
					strcpy(S[j], tmp);
				}
			}
		}
	}
	for (i = 0; i < N; i++)
	{
		if (strcmp(S[i], S[i + 1]) != 0)
			printf("%s\n", S[i]);
	}

	return 0;
}
*/