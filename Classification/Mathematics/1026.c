#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main()
{
	int N, A[51] = { 0, }, B[51] = { 0, }, i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < N; i++)
		scanf("%d", &B[i]);
	for (i = 1; i < N; i++)
	{
		int tmp_A = A[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (tmp_A < A[j])
			{
				A[j + 1] = A[j];
				A[j] = tmp_A;
			}
			else
				break;
		}
	}
	for (i = 1; i < N; i++)
	{
		int tmp_B = B[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (tmp_B > B[j])
			{
				B[j + 1] = B[j];
				B[j] = tmp_B;
			}
			else
				break;
		}
	}
	int ans = 0;
	for (i = 0; i < N; i++)
		ans += (A[i] * B[i]);
	printf("%d", ans);

	return 0;
}
*/
int main()
{
	int N, A[51] = { 0, }, B_count[101] = { 0, }, i, j, num;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		B_count[num]++;
	}
	for (i = 1; i < N; i++)
	{
		int tmp_A = A[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (tmp_A > A[j])
			{
				A[j + 1] = A[j];
				A[j] = tmp_A;
			}
			else
				break;
		}
	}
	/*
	/////////////////////////////////////
	// 검토!
	printf("\n\n");
	for (i = 0; i < N; i++)
		printf("%d ", A[i]);
	printf("\n\n");
	for (i = 0; i <= 100; i++)
		printf("%d ", B_count[i]);
	printf("\n\n");
	/////////////////////////////////////
	*/
	int ans = 0, k = 0;
	//////////////////////////////////////////////
	for (i = 0; i < N; i++)
	{
		while (B_count[k] == 0)
			k++;
		ans += (k * A[i]);
		B_count[k]--;
	}
	/*
	////////////////////////////////////////////
	// 개선!
	for (i = 0; i < N; i++)
	{
		if (B_count[k] > 0)
		{
			ans += (k * A[i]);
			B_count[k]--;
		}
		else
		{
			while (B_count[k] == 0)
				k++;
			i--;
		}
	}
	////////////////////////////////////////////
	*/
	printf("%d", ans);

	return 0;
}