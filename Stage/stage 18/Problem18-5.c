#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n, N, i, j = 0, k = 0, l = 1, stack[100001] = { 0, }, c = 0;
	char ans[200002] = { 0, };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &N);
		while (l <= N)
		{
			stack[j] = l;
			ans[k] = '+';
			j++;
			k++;
			l++;
		}
		j--;
		if (stack[j] != N)
			c = 1;
		stack[j] = 0;
		ans[k] = '-';
		k++;
	}
	if (c == 1)
		printf("NO");
	else
	{
		int len = strlen(ans);
		for (i = 0; i < len; i++)
			printf("%c\n", ans[i]);
	}

	return 0;
}