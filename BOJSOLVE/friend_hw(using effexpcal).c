#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) 
{
	int B, c = 0, g, k,C;
	int A = 1;
	int arr[100001];
	scanf("%d %d %d", &g, &k, &C);
	B = g;
	do {
		arr[c++] = k % 2;
		k = k / 2;
	} while (k != 0);

	for (int i = 0; i <= c - 1; i++) {
		if (arr[i] == 1) {
			A = (A * B)%C;
		}
		B = B * B;
	}
	printf("%d\n", A);
}
