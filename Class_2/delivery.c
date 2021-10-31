#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N,num1,num2;
	scanf("%d", &N);
	int i = 0, j = 0;
	while ((N - 5 * i) % 3 == 0 || (N - 3 * j) % 5 == 0)
	{
		if ((N - 5 * i) % 3 == 0 && (N - 3 * j) % 5 == 0)
		{
			num1 = i + (N - 5 * i) / 3;
			num2 = j + (N - 3 * j) / 5;
			if (num1 >= num2)
			{
				printf("%d\n", num2);
			}
			else printf("%d\n", num1);
		}
		else if ((N - 5 * i) % 3 == 0 && (N - 3 * j) % 5 != 0)
		{
			num1 = i + (N - 5 * i) / 3;
			printf("%d\n", num1);
		}
		else if ((N - 5 * i) % 3 != 0 && (N - 3 * j) % 5 == 0)
		{
			num2 = j + (N - 3 * j) / 5;
			printf("%d\n", num2);
		}
		else printf("%d\n", -1);
	}
	return 0;
}