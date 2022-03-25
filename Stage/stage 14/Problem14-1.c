#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 백트래킹 예시 1
// 4 3 대입해보기
/*
int N, M;
int result[9], compare[9];

void back(int n)
{
	int i;
	if (n == M)
	{
		printf("   답: ");/////
		for (i = 0; i < M; i++)
			printf("%d ", result[i]);
		printf("\n\n\n");
	}
	else
	{
		for (i = 1; i <= N; i++)
		{
			printf("   ///// n: %d, i: %d, compare[i]: %d, result[n]: %d\n\n", n, i, compare[i], result[n]);//////
			if (compare[i] == 0)
			{
				compare[i] = 1;
				result[n] = i;
				printf("   ***** n: %d, i: %d, compare[i]: %d, result[n]: %d\n\n", n, i, compare[i], result[n]);//////
				back(n + 1);
				// 재귀 함수 밑으로는 나중에~ 수행 함!
				// 재귀 끝날 때까지 위에 수행하고 그 다음에 아래 수행
				compare[i] = 0;  // 뒤로 돌아가는 역할
				printf("   @@@@@ n: %d, i: %d, compare[i]: %d, result[n]: %d\n\n", n, i, compare[i], result[n]);//////
				// @@@@@ 이거 한 줄에 하나 위로 올라감
			}
		}
		printf("   i에 관한 for문 한 번 다 돔\n\n");/////
		// 다 돌아서 위로 올라가기도 함
		// (i에 관한) or (답:) -> 이 두 문장 다음에 꼭 (@@@@@ 문장)이 옴
	}
}

int main()
{
	scanf("%d %d", &N, &M);
	back(0);

	return 0;
}
*/
int N, M;
int result[9], compare[9];
void back(int n)
{
	int i;
	if (n == M)
	{
		for (i = 0; i < M; i++)
			printf("%d ", result[i]);
		printf("\n");
	}
	else
	{
		for (i = 1; i <= N; i++)
		{
			if (compare[i] == 0)
			{
				compare[i] = 1;
				result[n] = i;
				back(n + 1);
				compare[i] = 0;
			}
		}
	}
}
int main()
{
	scanf("%d %d", &N, &M);
	back(0);
}