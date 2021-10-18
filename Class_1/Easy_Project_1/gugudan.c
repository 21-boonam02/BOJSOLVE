#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= 9; i++)
	{
		int num = 1;
		num = N * i;
		printf("%d * %d = %d\n", N, i, num);
	}
	return 0;
}