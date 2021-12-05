#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
    int age;
    char name[101];
} str;


int compare(const void* first, const void* second) {
    str* a = (str*)first;
    str* b = (str*)second;

    return (a->age > b->age ? 1 : (a->age < b->age ? -1 : 0));
}

int main(void)
{
    int N, i;
    scanf("%d", &N);
    str* arr = (str*)malloc(N * sizeof(str));
    for (i = 0; i < N; i++) {
        scanf("%d %s", &arr[i].age, arr[i].name);
    }
    qsort(arr, N, sizeof(str), compare);
    for (i = 0; i < N; i++) {
        printf("%d %s\n", arr[i].age, arr[i].name);
    }
    return 0;
}