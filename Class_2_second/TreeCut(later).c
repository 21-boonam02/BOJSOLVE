#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
// �Ű����� Ž�������� �̺� Ž���� ���ÿ� Ȱ���ϴ� �ڵ�
//�Ű� ���� Ž����: ���� Ž���� Ȱ���� ������ �ذ��ϴ� ��ũ��ó

int main(void)
{
	long long int N, M,total,max = 0,min = 1000000000;
	scanf("%lld%lld", &N, &M);
	total = M;
	long long int* A = (long long int*)calloc(sizeof(long long int), N);
	
	for (long long int i = 0; i < N; i++)
	{
		scanf("%lld", &A[i]);
		if (A[i] >= max) max = A[i];
		if (A[i] <= min) min = A[i];
		
	}
	
	printf("%d\n", binsearch(A,max,min,total,N));
}
int binsearch(long long int data[], long long int max,long long int min, long long int total, long long int cnt)
{
	long long int low, high;
	long long int mid;
	low = 0;
	high = max;
	while (low <= high)
	{
		 
		long long int sum = 0;
		mid = (low + high) / 2;
		for (long long int i = 0; i < cnt; i++)
		{
			if (data[i] >= mid)
			{
				sum += data[i] - mid;
			}
		}
		// ���� �ʹݿ� Ʋ�ȴ� �Ŵ�� �ٽ� �� �� �غ���.. Ʋ�ȴ� �� �ڵ� ���� �ϸ鼭
		//�� Ʋ���� �м��ؾ���

		if (sum < total) high = mid - 1;
		else
		{
			low = mid + 1;
		}
	}
	return high;
}