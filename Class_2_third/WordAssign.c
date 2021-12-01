#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 20001

typedef struct 
{
	char word[51];
	int count;
}wor;

wor sorted[MAX_SIZE];
void merge(wor *list1, int left, int mid, int right)
{
	int i = left, j = mid + 1, k = left, l;
	while (i <= mid && j <= right)
	{
		if (list1[i].count < list1[j].count)
		{
			sorted[k++] = list1[i++];
		}
		else if (list1[i].count > list1[j].count)
		{
			sorted[k++] = list1[j++];
		}
		else
		{
			if (strcmp(list1[i].word, list1[j].word) > 0)
				sorted[k++] = list1[j++];
			else 
				sorted[k++] = list1[i++];
		}
	}

	if (i > mid)
	{
		for (l = j; l <= right; l++)
		{
			sorted[k++] = list1[l];
		}
	}
	else
	{
		for (l = i; l <= mid; l++)
		{
			sorted[k++] = list1[l];
		}
	}

	for (l = left; l <= right; l++)
	{
		list1[l] = sorted[l];
	}
}
void merge_sort(wor* list1, int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(list1,  left, mid);
		merge_sort(list1,  mid + 1, right);
		merge(list1, left, mid, right);
	}
}



int main(void)
{
	int N;
	scanf("%d", &N);
	wor list[20001];
	for (int i = 0; i < N; i++)
	{
		scanf("%s", list[i].word);
		list[i].count = strlen(list[i].word);
	}

	merge_sort(list, 0, N - 1);

	printf("%s\n", list[0].word);
	for (int k = 1; k < N; k++)
	{
		if (strcmp(list[k - 1].word, list[k].word) != 0)
		{
			printf("%s\n", list[k].word);
		}
	}
	return 0;
}
