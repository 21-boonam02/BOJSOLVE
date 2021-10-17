#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) 
{	
	int num;
	int max=0;
	int maxindex;
	for (int i = 1; i <= 9; i++)
	{
		scanf("%d", &num);
		if (num > max)
		{
			max = num;
			maxindex = i;
		}
	}
	printf("%d\n%d", max, maxindex);
}