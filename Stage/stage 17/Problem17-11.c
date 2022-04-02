#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int N, i, ans = 0;
	scanf("%d", &N);
	for (i = 1; ; i++)
	{
		int compare = pow(5, i);
		if (compare > N)
			break;
		else
			ans += (N / pow(5, i));
	}
	printf("%d", ans);

	return 0;
}

// 0개수가 5의 배수에서 +1 / 25의 배수에서 +2 / 125의 배수에서 +3 ...
// 결론은 5의 배수에서 +1 / 25의 배수에서 추가 +1 / 125의 배수에서 추가 +1
// 5의 배수 개수 + 25의 배수 개수 + 125의 배수 개수 + ...
// 5^n이 N보다 크면 개수 세지 않고 break
