#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N;
	int j ;
	int i;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		j = 1;
		for (j=1 ; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}