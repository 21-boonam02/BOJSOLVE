#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* first, const void* second)
{
    int num1 = *(int*)first;
    int num2 = *(int*)second;
    if (num1 > num2) return 1;
    else if (num1 < num2) return -1;
    else return 0;
}

int main(void)
{
    int N, mid, range, sum = 0, cnt = 0, array[8001] = { 0, };
    double avg;
    scanf("%d", &N);
    int* list = (int*)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &list[i]);
        array[4000 + list[i]] += 1;
    }

    int max=0,count=0,num;
    for (int k = 0; k < 8001; k++)
    {     
        if (max < array[k])
        {
            max = array[k];
            num = k;
        }
    }

    for (int l = 0; l < 8001; l++)
    {
        if (max == array[l])
        {
            cnt++;
            if (cnt == 2) break;
        }
        count++;
    }
   
    int freqnum;
    if (count == 8001) count = 8000;
    if (cnt == 2) freqnum = count - 4000;
    else if (cnt == 1) freqnum = num - 4000;
 
    qsort(list, N, sizeof(int), compare);
    for (int j = 0; j < N; j++)
    {
        //printf("%d\n", list[j]);
        sum += list[j];
    }
    mid = list[N / 2];
    range = list[N - 1] - list[0];
    avg = (double) sum / N;
   
    printf("%.f\n%d\n%d\n%d\n", avg, mid, freqnum, range);
    free(list);
}