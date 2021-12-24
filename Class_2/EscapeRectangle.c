#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int x, y, w, h,answer;
	scanf("%d%d%d%d", &x, &y, &w, &h);
	
	if (x >= w - x)
	{
		if (y >= h - y)
		{
			answer = (w - x >= h - y) ? h - y : w - x;
		}
		else answer = (w - x >= y) ?  y : w - x;
	}
	else
	{
		if (y >= h - y)
		{
			answer = (x >= h - y) ? h - y :  x;
		}
		else answer = (x >= y) ? y : x;
	}
	printf("%d", answer);
}