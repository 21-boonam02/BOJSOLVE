#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int hash(char *s, int length);

int main(void)
{
	int L;
	scanf("%d", &L);
	char * s = (char*)malloc(sizeof(char)*L);
	char * arr = (int*)malloc(sizeof(int)*L);
	for (int i = 0; i < L; i++)
	{
		s[i] = getchar();
		arr[i] = atoi(s[i]);
	}
	for (int i = 0; i < L; i++)
	{
		printf("%c",s[i]);
		printf("%d",arr[i]);
	}

	printf("%d\n", hash(arr, L));
}

int hash(int *arr,int length)
{
	int H = 0,x=1;
	int M = 1234567891;

	for (int i = 0; i < length; i++)
	{
		H += (arr[i] * x) % M;
		x *= 31;
	}
}

