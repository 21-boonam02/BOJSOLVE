#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
// (�̰� ������ �ϴ� ���� ) �̰� ������ ���� �ٷ� �ٷ� ������ �������
//�ϸ� ������ ��
int full();
void empty();
void push(char x);
void pop();
void size();
void top();
// �ƽ�Ű �ڵ� �� (�� 72, ) 73�� ���� �ƽ�Ű �ڵ� ��
int TOP = -1;
int stack[SIZE];

int main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char word[51] = { 0, };
		int num;
		scanf("%s", &word);
		for (int j = 0; j < strlen(word); j++)
		{
			if (word[j] == '(') push('(');
			else if (word[j] == ')')
			{
				for (int i = 0; i < 2; i++)
				{
					pop();
				}
			}
		}
		empty();
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
		printf("YES\n");
	}
	else printf("NO\n");
}
void push(char x)
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
		char temp;
		temp = stack[TOP];
		TOP--;
		//printf("%s\n", temp);
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
		printf("%s\n", stack[TOP]);
	}
	else printf("%d\n", -1);
}
