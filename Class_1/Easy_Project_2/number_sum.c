#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N, sum= 0, num;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%1d", &num);
		sum += num;
	}
	printf("%d", sum);
}