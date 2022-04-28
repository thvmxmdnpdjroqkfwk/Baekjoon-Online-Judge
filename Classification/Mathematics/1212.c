#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void eight_two(char n)
{
	if (n == '0')
		printf("000");
	else if (n == '1')
		printf("001");
	else if (n == '2')
		printf("010");
	else if (n == '3')
		printf("011");
	else if (n == '4')
		printf("100");
	else if (n == '5')
		printf("101");
	else if (n == '6')
		printf("110");
	else if (n == '7')
		printf("111");
}

char A[333335];
int main()
{
	scanf("%s", &A);
	int len = strlen(A), i;
	if (A[0] == '0')
		printf("0");
	else if (A[0] == '1')
		printf("1");
	else if (A[0] == '2')
		printf("10");
	else if (A[0] == '3')
		printf("11");
	else
		eight_two(A[0]);
	for (i = 1; i < len; i++)
			eight_two(A[i]);

	return 0;
}

