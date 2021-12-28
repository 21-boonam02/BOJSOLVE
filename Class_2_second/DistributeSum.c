#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N,num,ans,ans2;
	scanf("%d", &N);
	for (int i = 1; i <= 1000000; i++)
	{
		num = i;
		ans = i;
		ans2 = i;
		while (1)
		{
			ans += num % 10;
			num = num / 10;
			if (num == 0) break;
		}
		if (ans == N) break;
	}
	if (ans == N) printf("%d\n", ans2);
	else printf("%d\n", 0);
}


