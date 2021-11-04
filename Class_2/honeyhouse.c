#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N, sera = 1, sum=0,cnt;
	scanf("%d", &N);
	if (N == 1)
	{
		printf("%d", 1);
	}
	else 
	{
		int j = 1;
		while (sera < N)
		{
	
			for (int i = 0; i < 6 * j; i++)
			{
				sera += 1;
				if (sera == N)
				{
					break;
				}
			}
			j++;
		}
		printf("%d\n", j);
		
	}
	return 0;
}

