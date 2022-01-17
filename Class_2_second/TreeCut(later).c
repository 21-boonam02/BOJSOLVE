#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
// �Ű����� Ž�������� �̺� Ž���� ���ÿ� Ȱ���ϴ� �ڵ�
//�Ű� ���� Ž����: ���� Ž���� Ȱ���� ������ �ذ��ϴ� ��ũ��ó

int main(void)
{
	int N, M,total,max = 0,min = 1000000000;
	scanf("%d%d", &N, &M);
	total = M;
	int* A = (int*)calloc(sizeof(int), N);
	
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
		if (A[i] >= max) max = A[i];
		if (A[i] <= min) min = A[i];
		
	}
	printf("%d\n", binsearch(A,max,min,total,N));
}
int binsearch(int data[], int max,int min, int total, int cnt)
{
	int low, high;
	int mid;
	low = min;
	high = max;
	while (low <= high)
	{
		int sum = 0;
		mid = (low + high) / 2;
		for (int i = 0; i < cnt; i++)
		{
			if (data[i] >= mid)
			{
				sum += data[i] - mid;
			}
		}
		// ���� �ʹݿ� Ʋ�ȴ� �Ŵ�� �ٽ� �� �� �غ���.. Ʋ�ȴ� �� �ڵ� ���� �ϸ鼭
		//�� Ʋ���� �м��ؾ���
		if (sum < total) high = mid - 1;
		else low = mid + 1;
	}
	return high;
}


