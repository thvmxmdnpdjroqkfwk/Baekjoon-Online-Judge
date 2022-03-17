#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	while (1)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
			printf("right\n");
		else
			printf("wrong\n");
	}
	*/
	while (1)
	{
		int a, b, c, max;
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		////// 가장 큰 수를 c로 보내기 //////
		if (a > b && a > c)
		{
			max = a;
			a = c;
			c = max;
		}
		else if (b > a && b > c)
		{
			max = b;
			b = c;
			c = max;
		}
		///////////////////////////////////
		if (a*a + b*b == c*c)
			printf("right\n");
		else
			printf("wrong\n");
	}

	return 0;
}