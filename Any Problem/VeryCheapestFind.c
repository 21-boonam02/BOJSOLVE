#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int aburger, bburger, cburger, min1;
	int coke, cider, min2;
	scanf("%d", &aburger);
	scanf("%d", &bburger);
	scanf("%d", &cburger);
	scanf("%d", &coke);
	scanf("%d", &cider);
	if (aburger >= bburger) min1 = bburger;
	else min1 = aburger;

	if (min1 >= cburger) min1 = cburger;

	if (coke >= cider) min2 = cider;
	else min2 = coke;
	printf("%d\n", min1 + min2 - 50);
}