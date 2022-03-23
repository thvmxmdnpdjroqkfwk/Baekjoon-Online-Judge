#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

struct point
{
	int x, y;
};
struct point arr[100000] = { 0, };
int compare(const void* a, const void* b)
{
	if (((struct point*)a)->y == ((struct point*)b)->y)
		return ((struct point*)a)->x - ((struct point*)b)->x;
	return ((struct point*)a)->y - ((struct point*)b)->y;
}
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d %d", &(arr[i].x), &(arr[i].y));
	qsort((struct point*)arr, N, sizeof(struct point), compare);
	for (int i = 0; i < N; i++)
		printf("%d %d\n", arr[i].x, arr[i].y);
	return 0;
}