#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N,min=1000000,max=-1000000,num;
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d", &num);
		if (num >= max )
		{
			max = num;
		}
		if ( num < min)
		{
			min = num;
		}
	}
	printf("%d %d\n", min, max);
}