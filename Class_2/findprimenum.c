#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N,cnt =0,num;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if (num == 1) cnt = cnt;
		else
		{
			int cnt2 = 0;
			for (int j = 2; j <= num; j++)
			{
				if (num % j == 0)
				{
					cnt2 += 1;
				}
			}
			if (cnt2 == 1)
			{
				cnt += 1;
			}
		}
	}
	printf("%d\n", cnt);
	return 0;
}