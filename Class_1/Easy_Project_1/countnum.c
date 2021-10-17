#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{	
	int num2=1;
	int str[10] = {0};
	int num;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &num);
		num2 *= num;
	}
	int nmg;
	do 
	{
		nmg = num2 % 10;
		num2 = num2 / 10;
		str[nmg]++;
	} while (num2 > 10);
	str[num2]++;
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", str[i]);
	}
	return 0;
}