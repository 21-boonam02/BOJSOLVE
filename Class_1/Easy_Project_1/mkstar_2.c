#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N, i, j;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		for (int k = N - i; k > 0; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}