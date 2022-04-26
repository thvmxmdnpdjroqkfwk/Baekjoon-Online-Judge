#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 치킨집 위치 저장
// 가정집 위치 저장
// 치킨집 M개만큼 고른 후 -> 이 과정에서 백트래킹 2번 문제 필요!!!!!!!!!!!!!!!!!!!!!
// M개의 치킨집을 가정집 1개와 거리 비교 (이들 중 최소 값만 선택)
// 모든 가정집에 위의 과정을 하여 더함
// 치킨집 M개 고르는 방법이 매우 많음 이들 중 합의 최소값 출력!
// 집 개수 최대 100개, 치킨집 개수 최대 13개
// ch_cnt개의 치킨집 중 M개 고름

int home[102][2] = { 0, }, chicken[15][2] = { 0, };   // [0]에 행 위치, [1]에 열 위치 정보 담겨 있음
int ho_cnt = 0, ch_cnt = 0;                           // 집, 치킨집 개수
int tmp = 0, pick[15] = { 0, }, isused[15] = { 0, };
int ans = 10000;

void backtrack(int a, int b, int c)
{
	int i, j;
	if (c == b)
	{
		int sum_min = 0;
		for (i = 1; i <= ho_cnt; i++)
		{
			int min = 100, distance;
			printf("치킨집 번호 : ");//////////////////////////////
			for (j = 0; j < b; j++)
			{
				printf("%d ", pick[j]);//////////////////////////////
				distance = abs(chicken[pick[j]][0] - home[i][0]) + abs(chicken[pick[j]][1] - home[i][1]);
				if (distance < min)
					min = distance;
			}
			sum_min += min;
			printf("\nsum_min : %d\n", sum_min);//////////////////////////////
		}
		if (sum_min < ans)
			ans = sum_min;
		printf("ans : %d\n\n", ans);//////////////////////////////
	}
	else
	{
		for (i = 1; i <= a; i++)
		{
			if (isused[i] == 0 && tmp < i)
			{
				pick[c] = i;
				isused[i] = 1;
				tmp = i;
				backtrack(a, b, c + 1);
				pick[c] = 0;
				isused[i] = 0;
				tmp = 0;
			}
		}
	}
}

int main()
{
	int N, M, n, i, j;
	int ho_index = 1, ch_index = 1;                       
	scanf("%d %d", &N, &M);
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
		{
			scanf("%d", &n);
			if (n == 1)
			{
				home[ho_index][0] = i;
				home[ho_index][1] = j;
				ho_index++;
				ho_cnt++;
			}
			else if (n == 2)
			{
				chicken[ch_index][0] = i;
				chicken[ch_index][1] = j;
				ch_index++;
				ch_cnt++;
			}
		}
	}
	///////////////////////////////////////////////////////////
	printf("\n집의 위치\n");
	for (i = 1; i <= ho_cnt; i++)
		printf("가로줄: %d, 세로줄: %d\n", home[i][0], home[i][1]);
	///////////////////////////////////////////////////////////
	printf("\n치킨집의 위치\n");
	for (i = 1; i <= ch_cnt; i++)
		printf("가로줄: %d, 세로줄: %d\n", chicken[i][0], chicken[i][1]);
	///////////////////////////////////////////////////////////
	backtrack(ch_cnt, M, 0);
	///////////////////////////////////////////////////////////
	printf("\n정답\n");
	printf("%d", ans);
	return 0;
}
/*
5 2
0 2 0 1 0
1 0 1 0 0
0 0 0 0 0
2 0 0 1 1
2 2 0 1 2
*/