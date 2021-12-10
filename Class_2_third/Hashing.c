#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int L;
	scanf("%d", &L);
	char* s = (char*)malloc(sizeof(char) * L);
	scanf("%s", s);
	hash(s, L);
	free(s);
}

int hash(char *s,int length)
{
	long long int total = 0, x = 1;
	int M = 1234567891;

	for (int i = 0; i < length; i++)
	{
		total += ((s[i]- 96) * x) % M;
		total = total % M;
		x = x*31%M;
	}
	printf("%d\n",total%M);
}