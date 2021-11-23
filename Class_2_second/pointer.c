#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N, M,cardnum;
	int a[100] = { 0 };
	int sum[1000000] = { 0 };
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &cardnum);
		a[i] = cardnum;
	}
	printf("%d\n", a[3]);
	int l = 0;
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum[l] = a[i]+ a[j]+ a[k];
				l++;
				printf("%d\n", sum[l]);
			}
		}
	}
	printf("%d\n", l);

	int cnt,min = 300000;
	cnt = N * (N - 1) * (N - 2) / 6;
	for ( int m = l; m > 0; m--)
	{
		if (M - sum[m] == 0)
		{
			printf("%d\n", M);
		}
		else
		{
			if ((M - sum[m]) <= min) min = M - sum[m];
		}
	}
	if(l== 1) printf("%d\n", M-min);
}

//-- 아래 코드는 단지 포인터를 활용하길래 그냥 조금 해봄
//long long sum(int* a, int n);
//long long sum(int* a, int n)
//{
//	long long total = 0;
//	n = sizeof(*a);
//	for (int i = 0; i < sizeof(*a); i++)
//	{
//		total += a[i];
//	}
//
//	return total;
//}