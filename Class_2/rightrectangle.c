#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int x, y, z;
	while (scanf("%d%d%d", &x, &y, &z) != EOF)
	{
		if (x == 0 && y == 0 && z == 0)
		{
			break;
		}
		else if (x >= y && x >= z)
		{
			 (x * x == y * y + z * z) ? printf("right\n") : printf("wrong\n");
		}
		else if (y >= z && y >= x)
		{
			 (y * y == x * x + z * z) ? printf("right\n") :printf("wrong\n");
		}
		else if (z >= y && z >= x)
		{
			 (z * z == y * y + x * x) ? printf("right\n") : printf("wrong\n");
		}
		
	}	

	return 0;
}