#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int func(int x);
int main()
{
    int a = 0, i = 0;
    while (i < 5) {
        printf("Enter the student's aaverage:");
        scanf("%d", &a);
        printf("%d on a 4 point scale is ", a);
        printf("%d", func(a));
        puts("");
        puts("");
        i++;

    }



    return 0;
}

int func(int x)
{
    if (x >= 90 && x <= 100)
        return 4;
    else if (x >= 80 && x <= 89)
        return 3;
    else if (x >= 70 && x <= 79)
        return 2;
    else if (x >= 60 && x <= 69)
        return 1;
    else if (x <= 60)
        return 0;
}