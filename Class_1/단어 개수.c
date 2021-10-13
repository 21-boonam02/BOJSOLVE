#include <stdio.h>
int main(void)
{
    char snt;
    int count = 0;
    char before = ' '; 
     
    while((snt = getchar()) != '\n')
    {
        if( before == ' ' && snt != ' ')
        {
            ++count;
        }
        before = snt;
    }
    printf("%d\n", count);
}