#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

//이분 탐색 알고리즘을 활용하는 문제 중 하나로
//qsort를 활용해야 함.
int compare(void* a, void* b)
{

}
int main(void)
{
	int N, M,num;
	scanf("%d", &N);
	int *A = (int *) malloc(sizeof(int) * N);
	//이 수들은 배열 안에 숫자를 넣어야 되어야 한다는 점.
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