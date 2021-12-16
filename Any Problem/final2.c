#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	int grade,total =0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &grade);
		if (grade > 40) total += grade;
		else total += 40;
	}
	printf("%d\n", total / 5);
}
