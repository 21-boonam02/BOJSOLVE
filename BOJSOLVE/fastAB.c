#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int T,A,B;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d + %d = %d\n",i,A,B, A + B);
	}
	return 0;
}