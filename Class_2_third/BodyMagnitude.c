#include <stdio.h>
#define _CRT_SECURE_NO_WARNING

int main(void)
{
	int N;
	int weight[50] = { 0 }, height[50] = { 0 };
	int grade[50] = { 0 };

	
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d%d", &weight[i], &height[i]);
		grade[i] = 1;
	}

	for (int j = 0; j < N - 1; j++)
	{
		for (int k = j + 1; k < N; k++)
		{
			if (weight[j] > weight[k] && height[j] > height[k])
			{
				grade[k] += 1;
			}
			else if (weight[j] < weight[k] && height[j] < height[k])
			{
				grade[j] += 1;
			}

		}
	}

	for (int l = 0; l < N; l++)
	{
		printf("%d ", grade[l]);
	}
	printf("\n");
	return 0;
}
