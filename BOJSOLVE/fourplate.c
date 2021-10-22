#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int x,y;
	scanf("%d\n%d", &x, &y);

	if (x > 0 && y > 0) printf("%d", 1);
	else if (x < 0 && y>0) printf("%d", 2);
	else if (x < 0 && y<0) printf("%d", 3);
	else  printf("%d", 4);
	return 0;
}