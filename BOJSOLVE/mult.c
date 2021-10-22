#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int A, B,result,sum;
	scanf("%d", &A);
	scanf("%d", &B);
	int num1, num2, num3;
	num1 = A * (B % 10);
	B = B / 10;
	num2 = A* (B%10);
	B = B / 10;
	num3 = A * (B % 10);
	printf("%d\n%d\n%d\n%d", num1, num2, num3, num1 + num2 * 10 + num3 * 10 * 10);
	return 0;
}