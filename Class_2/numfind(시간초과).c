#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int N, M, num1,num2;
	int A[100001];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num1);
		A[i] = num1;
	}
	scanf("%d", &M);
	for (int j = 0; j < M; j++)
	{
		int cnt = 0;
		scanf("%d", &num2);
		for (int k = 0; k < N; k++)
		{
			if (num2 == A[k])
			{
				cnt += 1;
			}

		}
		printf("%d\n", cnt);
	}
	return 0;
}

