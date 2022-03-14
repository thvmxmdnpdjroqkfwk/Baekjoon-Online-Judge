#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char A[10002] = { 0, }, B[10002] = { 0, }, sum[10002] = { 0, };
	scanf("%s %s", &A, &B);
	int len_A = strlen(A);
	int len_B = strlen(B);
	int i, temp;
	///////////////////////// 숫자 거꾸로 배열에 넣기 ///////////////////
	for (i = 0; i < len_A/2; i++)
	{
		temp = A[i];
		A[i] = A[(len_A-1)-i];
		A[(len_A-1)-i] = temp;
	}
	for (i = 0; i < len_B/2; i++)
	{
		temp = B[i];
		B[i] = B[(len_B-1)-i];
		B[(len_B-1)-i] = temp;
	}
	// 미리 뒤집지 않고 더할 수 있는 방법 생각해보기~~
	////////////////////////////////////////////////////////////////////

	//////////////////////// 숫자 덧셈 /////////////////////////////////
	int carry = 0, big;
	if (len_A > len_B)
		big = len_A;
	else
		big = len_B;
	for (i = 0; i < big+1; i++)
	{
		if (A[i]-'0'+B[i]-'0'+carry > 9)
		{
			sum[i] = (A[i]-'0'+B[i]-'0'+carry)%10;
			carry = 1;
		}
		else
		{
			sum[i] = A[i]-'0'+B[i]-'0'+carry;
			carry = 0;
		}
		while (sum[i] < 0)
		{
			sum[i] = sum[i] + '0';
			if (sum[i] > 9)
			{
				sum[i] = 0;
				carry = 1;
			}
		}
	}
	////////////////////////////////////////////////////////////////////
	
	//////////////////////// 거꾸로 출력하기 ////////////////////////////
	if (sum[big] == 1)
		big = big+1;
	for (i = 0; i < big; i++)
		printf("%d", sum[big-1-i]);
	////////////////////////////////////////////////////////////////////
	
	return 0;
}


/*
// 이거는 A와 B자리수 먼저 맞춰줌. A와 B중 짧은 쪽 앞에 0을 추가함
int main()
{
	char A[10002] = { 0, }, B[10002] = { 0, }, sum[10002] = { 0, };
	scanf("%s %s", &A, &B);
	int len_A = strlen(A);
	int len_B = strlen(B);
	int i, carry = 0, stand = 0, big, diff;
	if (len_A > len_B)
	{
		big = len_A;
		diff = len_A - len_B;
		for (i = len_B - 1; i >= 0; i--)
			B[i + diff] = B[i];
		for (i = 0; i < diff; i++)
			B[i] = '0';
	}
	else if (len_A < len_B)
	{
		big = len_B;
		diff = len_B - len_A;
		for (i = len_A - 1; i >= 0; i--)
			A[i + diff] = A[i];
		for (i = 0; i < diff; i++)
			A[i] = '0';
	}
	for (i = 0; i <= big; i++)
	{
		if (i == big)
		{
			sum[i] = carry;
			if (carry == 1)
				stand = 1;
		}
		else
			sum[i] = A[big - 1 - i] - '0' + B[big - 1 - i] - '0' + carry;
		if (sum[i] >= 10)
		{
			carry = 1;
			sum[i] = sum[i] - 10;
		}
		else
			carry = 0;
	}

	if (stand == 1)
	{
		for (i = big; i >= 0; i--)
			printf("%d", sum[i]);
	}
	else
	{
		for (i = big-1; i >= 0; i--)
			printf("%d", sum[i]);
	}

	return 0;
}
*/