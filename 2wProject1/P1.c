#include<stdio.h>


int main(void)
{
	char* ptr[5] = { "Korea", "Seoul", "Mapo", "Jongno", "152¹øÁö 2/3" };

	for (int i = 2; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i != j)
			{
				printf("%s\n", ptr[j]);
			}
			else
			{
			}
		}
		printf("\n");
	}

	return 0;
}