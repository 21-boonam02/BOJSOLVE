#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 10000

int sorted[MAX_SIZE];
void merge(int list[], int left, int mid, int right)
{
	int i = left, j = mid + 1, k = left, l;
	while (i <= mid && j <= right)
	{
		if (list[i] <= list[j]) sorted[k++] = list[i++];
		else sorted[k++] = list[j++];
	}

	if (i > mid)
	{
		for (l = j; l <= right; l++) sorted[k++] = list[l];
	}
	else
	{
		for (l = i; l <= mid; l++) sorted[k++] = list[l];
	}

	for (l = left; l <= right; l++) list[l] = sorted[l];
}
void merge_sort(int list[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}

int main(void)
{
	int i;
	int N;
	scanf("%d", &N);
	int list[MAX_SIZE] = { 0 };
	for (i = 0; i < N; i++)
	{
		scanf("%d", &list[i]);
	}

	merge_sort(list, 0, N - 1);
	for (int j = 0; j < N; j++)
	{
		printf("%d\n", list[j]);
	}
}