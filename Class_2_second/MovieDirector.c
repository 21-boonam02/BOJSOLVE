#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void itoaf(int num, char str[]);

int main(void)
{
	int N;
	char buffer[10] = { 0 };
	scanf("%d", &N);

	itoaf(666, buffer);
	int k = 0, movie_list[10000] = { 0 };
	for (int i = 1; i <= 1000000; i++)
	{
		char buffer2[10] = { 0 };
		int num ;
		num = i;
		itoaf(i, buffer2);
		if (strstr(buffer2, buffer) != NULL)
		{
			movie_list[k++] = num;
		}
		if (k == N) break;
	}
	
	printf("%d\n", movie_list[N-1]);

}
void itoaf(int num, char str[]) 
{
    int i = 0;
    int radix = 10;  
    int deg = 1;
    int cnt = 0;

    while (1) {    
        if ((num / deg) > 0)
            cnt++;
        else
            break;
        deg *= radix;
    }
    deg /= radix;    
    for (i = 0; i < cnt; i++) {    
        str[i] = num / deg + '0';    
        num -= ((num / deg) * deg);       
        deg /= radix;    
    }
    str[i] = '\0'; 
}