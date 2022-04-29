#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char list[7] = { 0, };
	scanf("%s", &list);
	int len = strlen(list), i, ans = 0;
	for (i = 0; i < len; i++)
	{
		if (list[i] < 'A')
			list[i] -= '0';
		else
			list[i] -= ('A' - 10);
		ans += (list[i] * pow(16, len - 1 - i));
	}
	printf("%d", ans);

	return 0;
}
// 0 = 48
// A = 65
// 12AF