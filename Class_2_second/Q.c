#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 100001

void push(int x);//enqueue
void pop();//
int full();//�� ���ִ��� Ȯ��
void empty();
void pop();
void size();
void top();

int TOP = -1;
int stack[SIZE];

int main(void)
{


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