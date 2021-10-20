#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char alpha[26] = { 0, };
	char s[101];
	scanf("%s", &s);

	for (int i = 0; i < strlen(s); i++)
	{
		for (int j = 97; j < 123; j++)
		{
			if (s[i] == j && alpha[j-97] == 0)
			{
				alpha[j - 97] += i;
			}
		}
	}
	for (int l = 0; l < 26; l++)
	{
		if (alpha[l] == 0)
		{
			alpha[l] -= 1;
		}
	}
	alpha[s[0] - 97] = 0;
	for (int k = 0; k < 26; k++)
	{
		printf("%d ", alpha[k]);
	}
}