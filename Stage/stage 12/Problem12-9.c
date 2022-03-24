#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct information
{
	int age;
	char name[101];
	int order;
};
struct information arr[100000] = { 0, };
int compare(const void* a, const void* b)
{
	// age가 같으면 order 오름차순으로 정렬해라
	if (((struct information*)a)->age == ((struct information*)b)->age)
		return ((struct information*)a)->order - ((struct information*)b)->order;

	// age가 같지 않으면 age 오름차순 정렬해라
	return ((struct information*)a)->age - ((struct information*)b)->age;
	// 위는 오름차순, 0보다 크면 자리바꿈
	// 위는 구조체에서의 age에 따른 오름차순 정렬임

	// return *(int*)b - *(int*)a; 구조체가 아니라 단순 int 배열인 경우!
	// 위의 식은 내림차순 정렬임, 0보다 크면 자리바꿈
	// 내림차순으로 정렬하고 싶다고 가정함
	// a>b이면 바꿀 필요 없음, a<b이면 바꿔야 함, 0보다 클 때 자리를 바꾼다
	// 따라서 return b-a 형태로 만들어준다

	// return strcmp((char*)a, (char*)b);
	// 위의 식은 문자열 사전순 오름차순 정렬임
	// 0보다 클 때 자리 바꿈
	// a가 작으면 strcmp는 0보다 작고, b가 작으면 strcmp는 0보다 큼
}
int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %s", &(arr[i].age), arr[i].name);
		arr[i].order = i;
	}

	// 일반 배열에서의 퀵정렬
	// qsort(arr, sizeof(arr)/sizeof(int), sizeof(int), compare);
	// 퀵소트 함수 안에는 (정렬할 배열, 요소 개수, 요소 크기, 비교함수) 들어감

	// 일반 배열에서의 문자열 사전순으로 퀵 정렬
	// 2차원 배열 arr[][]에서 정렬하는 방법임
		// qsort(arr, N, sizeof(arr[0]), compare);

	// 구조체에서의 퀵정렬
	qsort((struct information*)arr, N, sizeof(struct information), compare);

	for (int i = 0; i < N; i++)
		printf("%d %s\n", arr[i].age, arr[i].name);
	return 0;
}