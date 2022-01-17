#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

//�̺� Ž�� �˰����� Ȱ���ϴ� ���� �� �ϳ���
//qsort�� Ȱ���ؾ� ��.
int compare(const void* a,const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 > num2) return 1;
	else if (num1 < num2) return -1;
	else return 0;
}
int main(void)
{
	int N, M,num;
	scanf("%d", &N);
	int* A = (int*)calloc(sizeof(int) , N);
	//�� ������ �迭 �ȿ� ���ڸ� �־�� �Ǿ�� �Ѵٴ� ��.
	for (int i = 0; i < N;i++)
	{
		scanf("%d", &A[i]);
	}  
	scanf("%d", &M);
	int* B = (int *) calloc(sizeof(int) , M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &B[i]);
	}
	qsort(A, N, sizeof(int), compare);
	/*for (int k = 0; k < N; k++)
	{
		printf("%d ", A[k]);
	}
	printf("\n");*/
	int index;
	for (int j = 0; j < M; j++)
	{
		index = binsearch(A, N, B[j]);
		if (index == -1) printf("%d\n", 0);
		else printf("%d\n", 1);
	}
}

int binsearch(int data[],int n, int keydata)
{ 
	int low, high;
	int mid;

	low = 0;
	high = n-1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (keydata == data[mid])
		{
			return mid;
		}
		else if (keydata < data[mid])
		{
			high = mid - 1;
		}
		else if (keydata > data[mid])
		{
			low = mid + 1;
		}
	}
	return -1;
}