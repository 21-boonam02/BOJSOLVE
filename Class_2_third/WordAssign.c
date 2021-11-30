#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 20001

//char sorted1[MAX_SIZE][51] = { 0 };
//void merge(char list1[][50], int left, int mid, int right)
//{
//	int i = left, j = mid + 1, k = left, l;
//	while (i <= mid && j <= right)
//	{
//		if (strlen(list1[i]) < strlen(list1[j]))
//		{
//			sorted1[k++][49] = list1[i++][49];
//			
//		}
//		else if (strlen(list1[i]) > strlen(list1[j]))
//		{
//			sorted1[k++][49] = list1[j++][49];
//		}
//		else
//		{
//			if (strcmp(list1[i], list1[j]) > 0) sorted1[k++][49] = list1[j][49];
//			else if (strcmp(list1[i], list1[j]) < 0) sorted1[k++][49] = list1[i][49];
//			else sorted1[k++][49] = list1[i][49];
//		}
//
//	}
//
//	if (i > mid)
//	{
//		for (l = j; l <= right; l++)
//		{
//			sorted1[k++][49] = list1[l++][49];
//		}
//	}
//	else
//	{
//		for (l = i; l <= mid; l++)
//		{
//			sorted1[k++][49] = list1[l++][49];
//		}
//	}
//
//	for (l = left; l <= right; l++)
//	{
//		list1[l][49] = sorted1[l][49];
//	}
//}
//void merge_sort(char list1[][50], int left, int right)
//{
//	int mid;
//
//	if (left < right)
//	{
//		mid = (left + right) / 2;
//		merge_sort(list1,  left, mid);
//		merge_sort(list1,  mid + 1, right);
//		merge(list1, left, mid, right);
//	}
//}

int main(void)
{
	int N;
	char liss[][50] = { 0 };
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%s", liss[i]);
	}
	//merge_sort(liss, 0, N - 1);
	for (int k = 0; k < N; k++)
	{
		printf("%s\n", liss[k]);
	}
}