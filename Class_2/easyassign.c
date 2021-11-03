#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N, num;
	int num_list[1001];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num);
		num_list[i] = num;
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (num_list[j] > num_list[j + 1])
			{
				int temp;
				temp = num_list[j];
				num_list[j] = num_list[j + 1];
				num_list[j + 1] = temp;
			}
		}
	}
	for (int k = 0; k < N; k++)
	{
		printf("%d\n", num_list[k]);
	}
}