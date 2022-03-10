#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int alphabet[26] = {0,}, i, max = 0, index, count = 0, len;
	char input[1000000];
	scanf("%s", &input);
	len = strlen(input);
	/////////////////////////////////////////////////////////
	// alphabet 배열 안에 개수 넣기 {a A개수, b B개수, c C개수 ~}
	for (i = 0; i < len; i++)
	{
		int value = input[i];
		if ((value >= 65) && (value <= 90))
		{
			value = value-65;
			alphabet[value]++;
		}
		else if ((value >= 97) && (value <= 122))
		{
			value = value-97;
			alphabet[value]++;
		}
	}
	/////////////////////////////////////////////////////////
	// alphabet 배열 안에서 가장 큰 값과 그 때의 인덱스 값 찾기
	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] > max)
		{
			max = alphabet[i];
			index = i;
			count = 0;
		}
		else if (alphabet[i] == max)
			count++;
	}
	/////////////////////////////////////////////////////////
	// 출력
	if (count == 0)
		printf("%c", index+65);
	else
		printf("?");
	/////////////////////////////////////////////////////////
	return 0;
}