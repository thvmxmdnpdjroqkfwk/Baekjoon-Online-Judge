#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>

int N, M, tmp = 0;
int result[10] = { 0, }, isused[10] = { 0, };
void back(int n)
{
	int i;                                      // i는 전역변수로 설정하면 안 됨
	if (n == M)                                 // 숫자를 M개 다 고른 경우! 출력하자!
	{
		for (i = 0; i < M; i++)
			printf("%d ", result[i]);
		printf("\n");
	}
	else
	{
		for (i = 1; i <= N; i++)
		{
			if (isused[i] == 0 && tmp < i)      // 그 숫자가 사용되지 않았다면! && 그 숫자보다 크다면 -> 숫자 하나 뽑으러 들어옴
			{
				result[n] = i;                  // 이번 숫자 배열에 넣기 (i라는 숫자를 result배열에서 n자리에 넣는다)
				isused[i] = 1;                  // 이번 숫자 사용했다고 표시 (i라는 숫자)
				tmp = i;                        // 이번 숫자를 tmp에 넣고 함수에 들어갔을 때 이번 숫자보다 큰 수만 뽑도록 도와줌
				back(n + 1);                    // 이번 숫자 고르고 다음 숫자 찾으러 함수에 들어가기
				result[n] = 0;                  // 이번 숫자 안 뽑은걸로 돌려놓기 -> 재귀 다음에 꼭 되돌려놓는거 써주기
				isused[i] = 0;                  // 이번 숫자 사용 안 했을 때로 되돌리기 -> 재귀 다음에 꼭 되돌려놓는거 써주기
				tmp = 0;                        // tmp 다시 되돌려놓기 -> 재귀 다음에 꼭 되돌려놓는거 써주기
			}
		}
	}
}

int main()
{
	scanf("%d %d", &N, &M);
	back(0);                                    // 0은 아직 한 개도 안 골랐음을 의미함
}