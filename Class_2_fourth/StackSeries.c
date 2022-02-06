#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100000

int stack[SIZE] = { 0, };
int TOP = -1;

int main(void)
{
	int N;
	scanf("%d", &N);
	int a = 0,b =0 ,cnt = 2 * N + 1;
	//진짜 스택을 활용해서 빼고 넣고 할 것.
	int* numlist = (int*)calloc(sizeof(int) , N);
	//처음 우리가 원하는 형태의 값을 입력할 때, 값을 저장할 곳
	int* numlist_check = (int*)calloc(sizeof(int) , N); 
	char* plusminus = (char*)calloc(sizeof(char) , cnt);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &numlist[i]);
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", numlist[i]);
	}
	for (int i = 1; i <= N; i++)
	{
		if (numlist[a] != i)
		{
			plusminus[cnt++] = '+';// 문자열 자료형에다 저장해야 될 듯
			++TOP;
			stack[TOP] = i;
		}
		else
		{
			a++;
			++TOP;
			stack[TOP] = i;
			plusminus[cnt] = '+';
			cnt += 1;
			numlist_check[b++] = stack[TOP];
			TOP--;
			plusminus[cnt] = '-';
			cnt += 1;
		}
		if (TOP != -1)
		{
			for (int j = TOP; j >= 0; j--)
			{
				if (numlist[a] == stack[j])
				{
					numlist_check[b++] = stack[j];
					plusminus[cnt++] = '-';
					a++;
					TOP--;
				}
			}
		}
	}
	if (TOP != -1)
	{
		for (int k = TOP; k >= 0; k--)
		{
			printf("%d\n", stack[k]);
			numlist_check[b++] = stack[k];
		}
	}

	int right = 0;
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", numlist_check[i]);
		printf("\n");
		if (numlist[i] == numlist_check[i])
		{
			right++;
		}
	}
	if (right == N)asASd
	{
		for (int i = 0; i < cnt; i++)
		{
			printf("%c\n", plusminus[i]);
		}
	}
	else
	{
		printf("NO\n");
	}
	free(numlist);
	//free(numlist_check);
	//free(plusminus);
}
