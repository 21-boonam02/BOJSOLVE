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
		// 내가 초반에 틀렸던 거대로 다시 한 번 해보기.. 틀렸던 것 코드 참고 하면서
		//왜 틀린지 분석해야지
		if (sum < total) high = mid - 1;
		else low = mid + 1;
	}
	return high;
}