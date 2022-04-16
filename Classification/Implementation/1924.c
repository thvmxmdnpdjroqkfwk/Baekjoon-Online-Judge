#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void day(int n)
{
	if (n == 0)
		printf("SUN");
	else if (n == 1)
		printf("MON");
	else if (n == 2)
		printf("TUE");
	else if (n == 3)
		printf("WED");
	else if (n == 4)
		printf("THU");
	else if (n == 5)
		printf("FRI");
	else if (n == 6)
		printf("SAT");
}

int main()
{
	int x, y, i, m = 0, days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	scanf("%d %d", &x, &y);
	for (i = 0; i < x; i++)
		m += days[i];
	m += y;
	day(m % 7);

	return 0;
}