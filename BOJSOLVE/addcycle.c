#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N,a,new,cnt =1;
	scanf("%d", &N);
	a = N / 10 + N % 10;
	new = 10 * (N % 10) + a % 10;

	while (new != N)
	{
		a = new / 10 + new % 10;
		new = 10 * (new % 10) + a % 10;
		cnt += 1;
	};
	printf("%d", cnt);
	return 0;
}