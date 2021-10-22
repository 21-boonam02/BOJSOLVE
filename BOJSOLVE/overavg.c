#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int C,N;
	

	scanf("%d", &C);
	for (int i = 0; i < C; i++)
	{
		int tb[10001] = { 0, };
		int score, sum = 0, cnt = 0, avg;
		scanf("%d", &N);
		for (int j = 0; j < N; j++)
		{	
			scanf("%d", &score);
			tb[j] += score;
			sum += score;
		}
		avg = (float) sum / N;
		for (int k = 0; k < N; k++)
		{
			if (tb[k] > avg) cnt += 1;
		}
		printf("%d", cnt);
		printf("%5f%\n", (float) (cnt / N) * 100);
		
	}

	return 0;
}