#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int list[100000] = { 0,};
int list2[100000] = { 0, };
//오르차순으로 정렬하겠소!
int compare(const void *a, const void *b)
{
	int num1 = *(int *)a;
	int num2 = *(int *)b;

	if (num1 > num2) 
		return 1;
	else if (num1 < num2) 
		return -1;
	else 
		return 0;
}

int main(void)
{

	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &list[i]);
		scanf("%d", &list2[i]);
	}


	qsort(list, N, sizeof(int), compare);
	for (int j = 0; j < N; j++)
	{
		printf("%d\n", list[j]);
	}
}

 