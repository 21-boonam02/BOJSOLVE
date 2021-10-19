#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int rmt;
	int s[43] = { 0, };
	for (int i = 0; i < 10; i++)
	{
		int N;
		scanf("%d", &N);
		rmt = N % 42;
		s[rmt]++;
	}
	int count = 0;
	for (int j = 0; j < 43; j++)
	{
		if (s[j] != 0)
		{
			count++;
		}
	}
	printf("%d\n", count);
}