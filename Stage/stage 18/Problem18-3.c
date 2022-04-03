#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int T, i;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		char PS[51] = { 0, };
		scanf("%s", &PS);
		int len = strlen(PS), j, k = 0;
		if (len % 2 == 1)
			printf("NO\n");
		else
		{
			for (j = 0; j < len; j++)
			{
				if (PS[j] == '(')
					k++;
				else if (PS[j] == ')')
					k--;
				if (k < 0)
				{
					printf("NO\n");
					break;
				}
			}
			if (k == 0)
				printf("YES\n");
			else if (k > 0)
				printf("NO\n");
		}
	}

	return 0;
}
// 괄호 개수 홀수이면 무조건 NO
// 짝수일 때는
// 왼쪽 오른쪽 개수가 동일해야 YES
// 왼쪽이 하나 오면 오른쪽 하나 올 수 있음
// 
// 왼쪽괄호 k++ / 오른쪽괄호 k--
// 최종적으로 k = 0이면 YES
// k > 0이면 NO
// k++ k-- 하다가 k < 0이면 이미 NO