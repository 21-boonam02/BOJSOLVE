#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10001

//int numlist[SIZE] = { 0, };
int main(void)
{
	int N, num;
	scanf("%d", &N);
	int* numlist = (int*)calloc(sizeof(int) , SIZE);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		++numlist[num];
	}

	for (int j = 0; j < SIZE; j++)
	{
		if (numlist[j] > 0)
		{
			for (int k = numlist[j]; k > 0; k--)
			{
				printf("%d\n", j);
			}
		}
	}
	free(numlist);
}