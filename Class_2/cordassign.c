#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N,M;
	scanf("%d%d", &N, &M);
	int mum;

	mum = N * M;
	if (N < M)
	{
		int temp;
		temp = N;
		N = M;
		M = temp;
	}

	int rmt, gcd, lcm;
	rmt = N % M;
	while(rmt !=0)
	{
		N = M;
		M = rmt;
		rmt = N % M;
	}
	lcm = mum / M;
	printf("%d\n%d", M, lcm);
	return 0;
}