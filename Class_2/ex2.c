#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10001


int main(void)
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if ((a + b + c) == 180)
	{
		if (a == 60 && b == 60 && c == 60) printf("Equilateral\n");
		else if (a == b || b == c || c == a) printf("Isosceles\n");
		else if (a != b && b != c && c != a) printf("Scalene\n");
	}
	else printf("Error\n");
}