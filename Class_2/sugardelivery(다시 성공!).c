#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N,x,y=0;
	scanf("%d", &N);
	while ((N - 3 * y) >=0)
	{
		if ((N - 3 * y) % 5 != 0)
		{
			y++;
		}
		else 
		{
			x = (N - 3 * y) / 5;
			break;
		}
	}
	if ((N - 3 * y) < 0) printf("%d\n", -1);
	else printf("%d\n", x + y);
}