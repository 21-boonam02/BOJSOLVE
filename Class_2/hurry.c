#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int H, W, N, T;
	int num1, num2;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		num1 = (N % H == 0) ? N / H : N / H + 1;
		num2 = (N % H == 0) ? H : N % H;
		printf("%d\n", (num2) * 100 + num1);
	}
	return 0;
}

