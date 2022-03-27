#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
// N명 중에 스타트팀에 N/2명 선택, 나머지 N/2명은 자동으로 링크팀
// 스타트팀으로 가능한 것 -> 12 13 14 23 24 34
// 스타트팀에 들어갈 사람을 골라서 pick에 넣는다
// pick에 뽑힌 애들 능력치 계산
// 그 능력치들을 싹다 skill 배열에 넣음
// 스타팀이 12 13 14 23 24 34 일 때
// skill 배열은 [ 1 2 3 4 5 6 ]
// diff 배열은 [ 5 3 1 ] (양끝 값 차이를 계속 넣는다 - 가까워지면서)
// 왜냐하면 스타트팀 12 / 링크팀 34일 때 score가 1이고
// 스타트팀 34 / 링크팀 12일 때 score가 6임
// 12라는 애들의 능력치가 1이고 / 34라는 애들의 능력치가 6이므로!

int arr[20][20] = { 0, }, pick[10] = { 0, }, isused[21] = { 0, };
int score, skill[200000] = { 0, }, cnt = 0, diff[100000] = { 0, };

void back(int a, int b)
{
	int i, j;
	if (b == a / 2)
	{
		skill[cnt] = score;
		cnt++;
	}
	else
	{
		if (b == 0)
			score = 0;
		for (i = 1; i <= a; i++)
		{
			if ((b == 0 || (b > 0 && i > pick[b - 1])) && isused[i] == 0)
			{
				pick[b] = i;
				isused[i] = 1;
				for (j = 0; j < b; j++)
				{
					score += arr[pick[j]-1][i-1];
					score += arr[i-1][pick[j]-1];
				}
				back(a, b + 1);
				pick[b] = 0;
				isused[i] = 0;
				for (j = 0; j < b; j++)
				{
					score -= arr[pick[j] - 1][i - 1];
					score -= arr[i - 1][pick[j] - 1];
				}
			}
		}
	}
}

int main()
{
	int N, i, j, min = 10000000;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			scanf("%d", &arr[i][j]);
	}
	back(N, 0);
	/*
	for (i = 0; i < cnt; i++)
		printf("%d ", skill[i]);
	printf("\n");
	*/
	for (i = 0; i < cnt / 2; i++)
		diff[i] = abs(skill[i] - skill[cnt - 1 - i]);
	/*
	for (i = 0; i < cnt / 2; i++)
		printf("%d ", diff[i]);
	printf("\n");
	*/
	for (i = 0; i < cnt / 2; i++)
	{
		if (diff[i] < min)
			min = diff[i];
	}
	printf("%d", min);

	return 0;
}