#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int factorial(int x);

int main(void)
{
	int N;
	scanf("%d", &N);
	printf("%d", factorial(N));
	
	return 0;
}

int factorial(int x)
{
	if (0 == x || 1 == x) return 1;
	else
	{
		return x * factorial(x - 1);
	}

}