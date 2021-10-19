#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int rad = 1;
int rev(int n)
{
	rad = 1;
	if (n == 0) return 0;
	int result = rev(n / 10) + (n % 10) * rad;
	rad *= 10;
	return result;
}

int main(void)
{
	int A, B;
	scanf("%d %d", &A, &B);
	if (rev(A) > rev(B)) printf("%d\n",rev(A));
	else printf("%d\n", rev(B));
}

 