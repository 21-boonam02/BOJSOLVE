#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 51
// (�̰� ������ �ϴ� ���� ) �̰� ������ ���� �ٷ� �ٷ� ������ �������
//�ϸ� ������ ��

//int full();
//void empty();
//void push(char x);
//void pop();
//void size();
//void top();
//// �ƽ�Ű �ڵ� �� (�� 72, ) 73�� ���� �ƽ�Ű �ڵ� ��
//int TOP = -1;
//char stack[SIZE] = { 0, };

int main(void)
{
	int n;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int TOP = -1;
		char stack[SIZE] = { 0, };
		char word[51] = { 0, };
		scanf("%s", &word);

		for (int j = 0; j < strlen(word); j++)
		{
			if (word[j] == '(') stack[++TOP] = '(';
			else if (word[j] == ')')
			{
				stack[++TOP] = ')';
				if (stack[TOP- 1] == '(')
				{
					if (TOP == -1) break;
					else
					{
						for (int i = 0; i < 2; i++)
						{
							TOP--;
						}
					}
				}
			}
		}
		/*for (int k = 0; k < strlen(stack); k++)
		{
			printf("%c", stack[k]);
		}
		printf("%d\n", TOP);
		printf("\n");*/

		if (TOP == -1)
		{
			printf("YES\n");
		}
		else printf("NO\n");
	}
}
////�� á���� Ȯ���ϴ� �Լ�
//int full()
//{
//	if (TOP >= SIZE - 1)
//	{
//		//printf("Error : Stack is Full.\n ");
//		return 1;
//	}
//	return 0;
//}
//// ����ִ��� Ȯ��
//void empty()
//{
//	if (TOP == -1)
//	{
//		printf("YES\n");
//	}
//	else printf("NO\n");
//}
//void push(char x)
//{
//	if (!full())
//	{
//		stack[++TOP] = x;
//	}
//}
////������ top�� �ִ� ���Ҹ� ����.
//void pop()
//{
//	if (TOP != -1)
//	{
//		//char temp;
//		//temp = stack[TOP];
//		TOP--;
//		//printf("%s\n", temp);
//	}
//	else printf("YES\n");
//}
//// ���� ��� �ִ� ������ ���� ������ Ȯ��
//void size()
//{
//	if (TOP != -1)
//	{
//		int cnt = 0;
//		for (int i = 0; i <= TOP; i++)
//		{
//			cnt++;
//		}
//		printf("%d\n", cnt);
//	}
//	else printf("%d\n", 0);
//}
////������ �� ����⿡ ������ �ִ��� Ȯ��
//void top()
//{
//	if (TOP != -1)
//	{
//		printf("%s\n", stack[TOP]);
//	}
//	else printf("%d\n", -1);
//}
