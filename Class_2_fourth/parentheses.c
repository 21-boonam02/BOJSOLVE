#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 51

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
		if (TOP == -1)	printf("YES\n");
		else printf("NO\n");
	}
}

