#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
int main()
{
	char equation[51] = { 0, }, first_number[6] = { 0, };
	scanf("%s", &equation);
	int i, k, len = strlen(equation);
	for (i = 0; i < len; i++)
	{
		if (equation[i] == '+' || equation[i] == '-')
		{
			k = i;
			break;
		}
		else
			first_number[i] = equation[i];
	}
	int ans = atoi(first_number), count = 0, sig, j;
	// printf("첫 번째 숫자 : %d\n", ans); /////////////////////
	// printf("식 길이 : %d\n", len); //////////////////////////
	/////////////////////////////////////////////////////////
	// + -> sig = 0, - -> sig = 1
	while (1)
	{
		//printf("%c\n", equation[k]);///////////////////////////
		if (equation[k] == '+')
		{
			if (count == 0)
				sig = 0;
			else
				sig = 1;
		}
		else if (equation[k] == '-')
		{
			sig = 1;
			count++;
		}
		//printf("%d\n", count);////////////////////////////
		j = 0;
		k++;
		char num[6] = { 0, };
		while (1)
		{
			if (k == len || equation[k] == '-' || equation[k] == '+')
				break;
			num[j] = equation[k];
			k++;
			j++;
		}
		int number = atoi(num);
		//printf("%d\n", sig);//////////////////////////////
		if (sig == 0)
			ans += number;
		else
			ans -= number;
		//printf("%d\n", ans);/////////////////////////////
		if (k == len)
			break;
	}
	printf("%d", ans);

	return 0;
}
*/
// atoi : 문자열을 정수형으로 변환
// - 뒤에 +로 이루어진 친구들 싹다 괄호로 묶음
// 숫자는 5자리가 최대
// 결론 한 번이라도 -가 나온 순간 그 뒤의 숫자들은 무조건 빼주면 됨
int main()
{
	char equation[51] = { 0, };
	scanf("%s", &equation);
	int i = 0, len = strlen(equation), ans = 0, count = 0, sig = 0, j = 0;
	while (i < len)
	{
		char num[6] = { 0, };
		while (1)
		{
			if (i == len || equation[i] == '-' || equation[i] == '+')
				break;
			num[j] = equation[i];
			i++;
			j++;
		}
		int number = atoi(num);
		if (sig == 0)
			ans += number;
		else
			ans -= number;
		if (equation[i] == '+')
		{
			if (count == 0)
				sig = 0;
			else
				sig = 1;
		}
		else if (equation[i] == '-')
		{
			sig = 1;
			count++;
		}
		j = 0;
		i++;
	}
	printf("%d", ans);

	return 0;
}