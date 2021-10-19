#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int A = 1;
int add(int n)
{
	A = 1;
	if (n == 0) return 0;
	int result = add(n -1) + A;
	return result;
}
int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		char c[80];
		scanf("%s", c);
		int cnt = 0;
		int sum = 0;
		for (int j = 0; j < strlen(c); j++)
		{
			if (c[j] == 'O')
			{
				cnt++;
				add(cnt);
			}
			else if (c[j] == 'X')
			{
				cnt = 0;
			}
			sum += add(cnt);
		}
		printf("%d\n", sum);
	}
}