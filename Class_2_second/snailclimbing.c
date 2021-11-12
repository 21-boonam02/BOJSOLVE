#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int a,b,v;
	scanf("%d%d%d", &a, &b, &v);
	if ((v - a) % (b - a) == 0)
	{
		printf("%d\n", (v - a) / (a-b)+1);
	}
	else
	{
		int num;
		num = (v - a) / (a - b);
		printf("%d\n", num + 2);
	}
}
