#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

//�̺� Ž�� �˰����� Ȱ���ϴ� ���� �� �ϳ���
//qsort�� Ȱ���ؾ� ��.
int compare(void* a, void* b)
{

}
int main(void)
{
	int N, M,num;
	scanf("%d", &N);
	int *A = (int *) malloc(sizeof(int) * N);
	//�� ������ �迭 �ȿ� ���ڸ� �־�� �Ǿ�� �Ѵٴ� ��.
	for (int i = 0; i < N;i++)
	{
		scanf("%d", &A[i]);
	}  
	scanf("%d", &M);
	int* B = (int*)malloc(sizeof(int) * M);
	for (int i = 0; i < M; i++)
	{
		scanf("%d", &B[i]);
	}
}