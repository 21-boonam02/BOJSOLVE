#include <stdio.h>
#define _CRT_SECURE_NO_WARNING
#define MAX_SIZE 100000

typedef struct
{
	int age;
	char name[201];
	int order;

}judge;

judge buffer[MAX_SIZE];
void merge(judge* club, int left, int mid, int right)
{
	int i = left, j = mid + 1, k = left, l;
	while (i <= mid && j <= right)
	{
		if (club[i].age < club[j].age)
		{
			buffer[k++] = club[i++];
		}
		else if (club[i].age > club[j].age)
		{
			buffer[k++] = club[j++];
		}
		else
		{
			if (club[i].order > club[j].order)
			{
				buffer[k++] = club[j++];
			}
			else buffer[k++] = club[i++];
		}
	}

	if (i > mid)
	{
		for (l = j; l <= right; l++)
		{
			buffer[k++] = club[l];
		}
	}
	else
	{
		for (l = i; l <= mid; l++)
		{
			buffer[k++] = club[l];
		}
	}

	for (l = left; l <= right; l++)
	{
		club[l] = buffer[l];
	}
}
void merge_sort(judge* list1, int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(list1, left, mid);
		merge_sort(list1, mid + 1, right);
		merge(list1, left, mid, right);
	}
}

judge club[MAX_SIZE];
int main(void)
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &club[i].age);
		scanf("%s", &club[i].name);
		club[i].order = i;
	}
	merge_sort(club, 0, N - 1);
	for (int i = 0; i < N; i++)
	{
		printf("%d %s", club[i].age, club[i].name);
		printf("\n");
	}
}
