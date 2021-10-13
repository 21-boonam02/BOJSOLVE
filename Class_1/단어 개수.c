/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char snt[256] = " ";
    char *ptr = strtok(snt, " ");
    int count =0;
    scanf("%s\n" &snt);
    
    while (ptr != NULL){
        ptr = strtok(NULL, " ");
        count += 1;
    }

    printf("%d\n", count);

    return 0;
}
