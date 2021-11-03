#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int N,min = 50;
	char word;
	char word_list[20001] = { 0 };

	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", &word);
		for (int j = N - 1; j >= 0; j--)
		{
			if (strlen(word_list[N - 1 - j]) >= strlen(word))
			{
				if (strlen(word_list[N - 1 - j]) == strlen(word)
					&& word_list[N - 1 - j] == word)
				{
					if()
				}
				// 0ºÎÅÍ Â÷·Ê·Î ÇÑ Ä­¾¿ ¹Ð¸®µµ·Ï ¸¸µê!!
				word_list[N - 1 - j + 1] = word_list[N - 1 - j];
				word_list[N - 1 - j] = word;
			}
		}

	}
}

