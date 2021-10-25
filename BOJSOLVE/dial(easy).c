#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char c[16];
	int sum = 0;
	scanf("%s", c);

	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] == 'A' || c[i] == 'B' || c[i] == 'C')
		{
			sum += 3;
		}
		else if (c[i] == 'D' || c[i] == 'E' || c[i] == 'F')
		{
			sum += 4;
		}
		else if (c[i] == 'G' || c[i] == 'H' || c[i] == 'I')
		{
			sum += 5;
		}
		else if (c[i] == 'J' || c[i] == 'K' || c[i] == 'L')
		{
			sum += 6;
		}
		else if (c[i] == 'M' || c[i] == 'N' || c[i] == 'O')
		{
			sum += 7;
		}
		else if (c[i] == 'P' || c[i] == 'Q' || c[i] == 'R' || c[i] == 'S')
		{
			sum += 8;

		}
		else if (c[i] == 'T' || c[i] == 'U' || c[i] == 'V')
		{
			sum += 9;
		}
		else if (c[i] == 'X' || c[i] == 'Y' || c[i] == 'Z' || c[i] == 'W')
		{
			sum += 10;
		}
	}

	printf("%d", sum);
	return 0;
}