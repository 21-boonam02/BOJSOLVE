#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100000

int main(void)
{
	int TOP = -1, N;
	scanf("%d", N);
	int* stack = (int*)malloc(sizeof(int) * N);
	int* numlist = (int*)malloc(sizeof(int) * N);
	int* numlist_again = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", *(numlist + i));
	}
	for (int i = 1; i <= N; i++)
	{

		if (numlist[i] == i)
		{
			printf("+\n");
			stack[TOP++] = i;

		}
		else
		{
			printf("-\n");
			stack[TOP++] = i;

		}
	}
}


int full();
void empty();
void push(int x);
void pop();
void size();
void top();

int TOP = -1;
int stack[SIZE];

int main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char word[6];
		int num;
		scanf("%s", &word);
		if (strcmp(word, "push") == 0)
		{
			scanf("%d", &num);
			push(num);
		}
		else if (!strcmp(word, "empty")) empty();
		else if (strcmp(word, "pop") == 0) pop();
		else if (strcmp(word, "size") == 0) size();
		else if (strcmp(word, "top") == 0) top();
	}

}
//�� á���� Ȯ���ϴ� �Լ�
int full()
{
	if (TOP >= SIZE - 1)
	{
		//printf("Error : Stack is Full.\n ");
		return 1;
	}
	return 0;
}
// ����ִ��� Ȯ��
void empty()
{
	if (TOP == -1)
	{
		printf("%d\n", 1);
	}
	else printf("%d\n", 0);
}
void push(int x)
{
	if (!full())
	{
		stack[++TOP] = x;
	}
}
//������ top�� �ִ� ���Ҹ� ����.
void pop()
{
	if (TOP != -1)
	{
		int temp;
		temp = stack[TOP];
		TOP--;
		printf("%d\n", temp);
	}
	else printf("%d\n", -1);
}
// ���� ��� �ִ� ������ ���� ������ Ȯ��
void size()
{
	if (TOP != -1)
	{
		int cnt = 0;
		for (int i = 0; i <= TOP; i++)
		{
			cnt++;
		}
		printf("%d\n", cnt);
	}
	else printf("%d\n", 0);
}
//������ �� ����⿡ ������ �ִ��� Ȯ��
void top()
{
	if (TOP != -1)
	{
		printf("%d\n", stack[TOP]);
	}
	else printf("%d\n", -1);
}