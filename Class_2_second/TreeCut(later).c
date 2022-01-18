#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
// 매개변수 탐색법이자 이분 탐색을 동시에 활용하는 코드
//매개 변수 탐색법: 이진 탐색을 활용해 문제를 해결하는 테크닉처

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
		// 내가 초반에 틀렸던 거대로 다시 한 번 해보기.. 틀렸던 것 코드 참고 하면서
		//왜 틀린지 분석해야지

		if (sum < total) high = mid - 1;
		else
		{
			low = mid + 1;
		}
	}
	return high;
}