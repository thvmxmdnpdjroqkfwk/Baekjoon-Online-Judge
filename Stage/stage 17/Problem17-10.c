#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int T, i, j, k, n;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d", &n);
		char type[31][21] = { 0, }, name[21] = { 0, };
		int type_count[31] = { 1, };

		// type이라는 배열에 의상 종류들 다 집어 넣기
		for (j = 0; j < n; j++)
			scanf("%s %s", &name, &type[j]);

		// type에서 각 의상 종류에 해당되는 의상 개수 구하기
		for (j = 1; j < n; j++)
		{
			int count = 0;
			for (k = 0; k < j; k++)
			{
				if (strcmp(type[j], type[k]) == 0)
				{
					type_count[k]++;
					break;
				}
				else
					count++;
			}
			if (count == j)
				type_count[j]++;
		}

		// 입는 방법 개수 구하기 -> 의상 종류별 의상 개수가 3, 2, 1이라고 하면
		// (3+1)*(2+1)*(1+1)-1 = 23이다
		// 3개중 1개 입던가 안 입던가 * 2개중 1개 입던가 안 입던가 * 1개중 1개 입던가 안 입던가
		// - 전체 다 안 입은 경우
		int ans = 1;
		for (j = 0; j < n; j++)
		{
			if (type_count[j] > 0)
				ans *= (type_count[j]+1);
		}
		printf("%d\n", ans - 1);
	}

	return 0;
}

// eyewear 1개 / headgear 2개 / face 3개
// 4 * 3 * 2 - 1 = 23
// 1개만 1+2+3  2개만 2+3+6  3개만 6 -> 23개
/*
2
3
hat headgear
sunglasses eyewear
turban headgear
*/