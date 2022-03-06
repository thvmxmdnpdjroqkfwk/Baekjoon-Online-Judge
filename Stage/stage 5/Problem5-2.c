#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
	int i, input, arr[9], index;
	int max = 0;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &input);
		arr[i] = input;
		if (input >= max)
		{
			max = input;
			index = i+1;
		}
	}
	printf("%d\n%d", max, index);
	
	return 0;
}