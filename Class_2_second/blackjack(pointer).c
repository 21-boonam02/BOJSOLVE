#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N, M, max = 0;
	int cardnum[101] = { 0, }, sum;
	int* ptr = cardnum;
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", *(ptr + i));
	}

	int l = 0;
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = *(ptr + i) + *(ptr + j) + *(ptr + k);
				if (sum > max && sum <= M) max = sum;
			}
		}
	}
	printf("%d\n", max);
}