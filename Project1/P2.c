#include<stdio.h>

int main(void)
{
	char str[100];
	int i = 0;
	
	printf("문자열을 입력하세요 : ");
	
	scanf_s("%s", str, sizeof(str));

	while (str[i] != '\0')
	{
		i++;
	}

	printf("\n입력된 문자열은\n\"%s\"\n입니다.\n", str);
	printf("\n입력된 문자열의 길이 : %d", i);

	return 0;

}