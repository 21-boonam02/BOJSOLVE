#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	while (scanf("%d %d", &A, &B) != EOF)
	{
		if (A == 0 && B == 0)
		{
			continue;
		}
		else printf("%d\n", A + B);
	}
}