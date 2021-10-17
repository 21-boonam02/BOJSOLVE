#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{	
	int num1,sum =0,vernum;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num1);
		sum += num1 * num1;

	}
	vernum = sum % 10;
	printf("%d", vernum);
}

