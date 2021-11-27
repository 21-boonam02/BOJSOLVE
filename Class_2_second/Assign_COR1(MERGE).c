#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 100000

int sorted1[MAX_SIZE];
int sorted2[MAX_SIZE];

void merge(int list1[], int list2[], int left, int mid, int right)
{
	int i = left, j = mid + 1, k = left, l;
	while (i <= mid && j <= right)
	{
		if (list1[i] < list1[j])
		{
			sorted1[k] = list1[i];
			sorted2[k++] = list2[i++];
		}
		else if (list1[i] > list1[j])
		{
			sorted1[k] = list1[j];
			sorted2[k++] = list2[j++];
		}
		else
		{
			if (list2[i] <= list2[j])
			{
				sorted1[k] = list1[i];
				sorted2[k++] = list2[i++];
			}
			else
			{
				sorted1[k] = list1[j];
				sorted2[k++] = list2[j++];
			}
		}
	}

	if (i > mid)
	{
		for (l = j; l <= right; l++)
		{
			sorted1[k] = list1[l];
			sorted2[k++] = list2[l];
		}
	}
	else
	{
		for (l = i; l <= mid; l++)
		{
			sorted1[k] = list1[l];
			sorted2[k++] = list2[l];
		}
	}

	for (l = left; l <= right; l++)
	{
		list1[l] = sorted1[l];
		list2[l] = sorted2[l];
	}
}
void merge_sort(int list1[], int list2[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(list1, list2, left, mid);
		merge_sort(list1, list2, mid + 1, right);
		merge(list1, list2, left, mid, right);
	}
}

int main(void)
{
	int i;
	int N;
	scanf("%d", &N);
	int x[MAX_SIZE] = { 0 };
	int y[MAX_SIZE] = { 0 };
	for (i = 0; i < N; i++)
	{
		scanf("%d%d", &x[i],&y[i]);
	}
	merge_sort(x,y, 0, N - 1);
	for (int j = 0; j < N; j++)
	{
		printf("%d %d\n", x[j],y[j]);
	}
}