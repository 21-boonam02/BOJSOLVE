#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	float d1, d2;
	scanf("%f%f", &d1, &d2);
	float total =0;
	float pi = 3.141592;
	total = 2 * d1 + 2 * pi * (d2);
	printf("%.6f\n", total);

}