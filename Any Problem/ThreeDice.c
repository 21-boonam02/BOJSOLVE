#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a == b&& b == c&& c==a) printf("%d\n", 10000 + a * 1000);
	else if (a == b || b == c || c == a)
	{
		if (a == b && a !=c && b != c) printf("%d\n", 1000 + a * 100);
		else if (a == c && a != b && b != c) printf("%d\n", 1000 + a * 100);
		else if (c == b && a != c && b != a) printf("%d\n", 1000 + b * 100);
	}
	else if (a != b && b != c && c != a)
	{
		printf("%d\n",findmax(a, b, c)*100);
	}
}
int findmax(int a, int b, int c)
{
	int max;
	max = a;
	if (max < b) max = b;
	if (max < c) max = c;

	return max;
}

