#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 51
// (이게 나오면 일단 들어가고 ) 이게 나오면 이제 바로 바로 나오는 방식으로
//하면 괜찮을 듯

//int full();
//void empty();
//void push(char x);
//void pop();
//void size();
//void top();
//// 아스키 코드 값 (는 72, ) 73이 각각 아스키 코드 값
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
////꽉 찼는지 확인하는 함수
//int full()
//{
//	if (TOP >= SIZE - 1)
//	{
//		//printf("Error : Stack is Full.\n ");
//		return 1;
//	}
//	return 0;
//}
//// 비어있는지 확인
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
////스택의 top에 있는 원소를 뺀다.
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
//// 지금 들어 있는 스택의 원소 개수를 확인
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
////스택의 맨 꼭대기에 무엇이 있는지 확인
//void top()
//{
//	if (TOP != -1)
//	{
//		printf("%s\n", stack[TOP]);
//	}
//	else printf("%d\n", -1);
//}
