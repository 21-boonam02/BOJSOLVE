#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N, X,num;
	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if (X > num)
		{
			printf("%d ", num);
		}
	}
}