#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int num, grade=0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		grade += num;
	}
	printf("%d\n", grade);
}
