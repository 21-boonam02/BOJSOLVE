#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE

int main(void)
{
	int N;
	char list[SIZE] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", list[i]);
	}

}
