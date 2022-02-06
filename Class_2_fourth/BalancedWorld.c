#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int top = -1;
char stack1[101];
char stack2[101];

int main(void)
{
	while (1)
	{
		top = -1;
		gets(stack1);

		if (strcmp(stack1, ".") == 0)
		{
			break;
		}
		int len = strlen(stack1);
		for (int i = 0; i < len; i++)
		{
			if (stack1[i] == '(' || stack1[i] == ')'
				|| stack2[i] == '[' || stack2[i] == ']')
			{
				if(top == )
			}
		}
	}
}