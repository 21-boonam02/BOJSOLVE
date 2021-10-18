#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) 
{
	int T, R;
	char S[21];
	scanf("%d", &T);

	for (int i = T; i > 0; i--)
	{
		scanf("%d %s", &R, &S);

		for (int j = 0; j < strlen(S); j++)
		{
			for (int k = R; k > 0; k--)
			{
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
	return 0;
}