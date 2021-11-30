#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N;
	scanf("%d", &N);

	int k = 0, movie_list[100001] = { 0 };
	for (int i = 1; i <= 10000000; i++)
	{
		int num;
		num = i;
		char buffer[8] = { 0 };
		sprintf(buffer, "%d", i);
		if (strstr(buffer, "666") != NULL)
		{
			movie_list[k++] = num;
		}
		if (k == N) break;
	}

	printf("%d\n", movie_list[N - 1]);

}
