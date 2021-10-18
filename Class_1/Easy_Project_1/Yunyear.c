#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int Y;
	scanf("%d", &Y);
	
	if (Y % 4 == 0)
	{
		if (Y % 100 != 0 || Y % 400 == 0)
		{
			printf("%d", 1);
		}
		else
		{
			printf("%d", 0);
		}
	}
	else
	{
		printf("%d", 0);
	}
}