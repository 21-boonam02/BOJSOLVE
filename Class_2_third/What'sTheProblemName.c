#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N, M, cardnum;
	int a[100] = { 0 };
	int sum[1000] = { 0 };
	scanf("%d%d", &N, &M);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &cardnum);
		a[i] = cardnum;
	}

	int l = 0;
	for (int i = 0; i < N - 2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum[l] = a[i] + a[j] + a[k];
				l++;
			}
		}
	}
	int m,cnt, min = 300000;
	cnt = N * (N - 1) * (N - 2) / 6;
	for ( m = l; m > 0; m--)
	{
		if (M - sum[m] == 0)
		{
			break;
		}
		else
		{
			if ((M - sum[m]) <= min && M-sum[m] > 0) min = M - sum[m];
			printf("%d\n", min);
		}
	}
	if (M == sum[m]) printf("\n%d\n", M);
	else printf("\n%d\n", M-min);
}





