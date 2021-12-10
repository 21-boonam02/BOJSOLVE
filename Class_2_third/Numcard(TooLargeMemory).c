#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 20000001
long long int arr[MAX] = { 0, };
int main(void)
{
	long long int numhave, num;
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%lld", &num);
		arr[MAX / 2 + num] += 1;
	}
	int M;
	scanf("%d", &M);
	for (int j = 0; j < M; j++)
	{
		scanf("%lld", &numhave);
		printf("%lld ", arr[MAX / 2 + numhave]);
	}
	printf("\n");

	return 0;
}

