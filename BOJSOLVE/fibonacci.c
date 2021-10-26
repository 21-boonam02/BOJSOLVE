#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int fibonacci(int x);

int main(void)
{
	int N;
	scanf("%d", &N);
	printf("%d", fibonacci(N));

	return 0;
}

int fibonacci(int x)
{
	if (0 == x || 1 == x) return x;
	else
	{
		return fibonacci(x-1) + fibonacci(x-2) ;
	}

}