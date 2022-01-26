#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100000

int main(void)
{
	int TOP = -1, N;
	scanf("%d", N);
	int a = 0, cnt = 2 * N;
	int* stack = (int*)malloc(sizeof(int) * N);
	//진짜 스택을 활용해서 빼고 넣고 할 것.
	int* numlist = (int*)malloc(sizeof(int) * N);
	//처음 우리가 원하는 형태의 값을 입력할 때, 값을 저장할 곳
	int* numlist_again = (int*)malloc(sizeof(int) * N);
	//여기에서 우리가 원하는 값을 넣고, 이제 출력할 것!!
	for (int i = 0; i < N; i++)
	{
		scanf("%d", *(numlist + i));
	}
	for (int i = 1; i <= N; i++)
	{

		if (numlist[a] == i)
		{
			printf("-\n");
			numlist_again[a++] = i;
			if()
		}
		else
		{ 
			printf("+\n");
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
//꽉 찼는지 확인하는 함수
int full()
{
	if (TOP >= SIZE - 1)
	{
		//printf("Error : Stack is Full.\n ");
		return 1;
	}
	return 0;
}
// 비어있는지 확인
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
//스택의 top에 있는 원소를 뺀다.
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
// 지금 들어 있는 스택의 원소 개수를 확인
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
//스택의 맨 꼭대기에 무엇이 있는지 확인
void top()
{
	if (TOP != -1)
	{
		printf("%d\n", stack[TOP]);
	}
	else printf("%d\n", -1);
}