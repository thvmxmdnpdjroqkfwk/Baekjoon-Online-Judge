#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score, i, ans = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score);
		if (score < 40)
			score = 40;
		ans += score;
	}
	printf("%d", ans / 5);

	return 0;
}