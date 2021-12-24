#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int euclidean(int x, int y);

int main(void)
{
	int N, M,gcd,lcm,temp;
	scanf("%d%d", &N, &M);
	if (N < M)
	{
		temp = M;
		M = N;
		N = temp;
	}
	gcd = euclidean(N, M);
	lcm = (N * M) / gcd;
	printf("%d\n%d", gcd, lcm);
}

int euclidean(int x, int y)
{
	// base caseÀÎµ¥
	if (x % y == 0)
	{
		return y;
	}
	return  euclidean(y, x % y);
}

