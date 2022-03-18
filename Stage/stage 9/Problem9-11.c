#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	/*
	int T, i;
	scanf("%d", &T);
	
	for (i = 0; i < T; i++)
	{
		int x1, y1, r1, x2, y2, r2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		if (x1 == x2 && y1 == y2 && r1 == r2)
			printf("%d\n", -1);
		else if ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) > (r1+r2)*(r1+r2) || (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) < (r1-r2)*(r1-r2))
			printf("%d\n", 0);
		else if ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) == (r1+r2)*(r1+r2) || (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) == (r1-r2)*(r1-r2))
			printf("%d\n", 1);
		else
			printf("%d\n", 2);
	}
	*/
	int T, i;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		int x1, y1, r1, x2, y2, r2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		int R = pow(x1-x2, 2)+pow(y1-y2, 2);
		if (R == 0 && r1 == r2)
			printf("%d\n", -1);
		else if (R > pow(r1+r2, 2) || R < pow(r1-r2, 2))
			printf("%d\n", 0);
		else if (R == pow(r1+r2, 2) || R == pow(r1-r2, 2))
			printf("%d\n", 1);
		else
			printf("%d\n", 2);
	}

	return 0;
}