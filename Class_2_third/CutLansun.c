#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int binsearch(int data[], int max, int total,int cnt);

int main(void)
{
	int N;
	int K,max=1;
	int data[100000] = { 0 };
	scanf("%d%d", &K, &N);
	for ( int i = 0; i < K; i++)
	{
		scanf("%d", &data[i]);
		if (data[i] >= max) max = data[i];
	}
	int index;
	index = binsearch(data, max, N, K);
	printf("%d\n", index);

	return 0;
}

int binsearch(int data[],int max,int total,int cnt)
{
	int low, high;
	int mid;
	low = 1;
	high = max;
	while (low <= high)
	{
		int sum = 0;
		mid = (low + high) / 2;
		for ( int i = 0; i < cnt; i++)
		{
			sum += data[i] / mid;
		}
		// ���� �ʹݿ� Ʋ�ȴ� �Ŵ�� �ٽ� �� �� �غ���.. Ʋ�ȴ� �� �ڵ� ���� �ϸ鼭
		//�� Ʋ���� �м��ؾ���
		if (sum < total) high = mid - 1;
		else low = mid + 1;
	}
	return high;
}