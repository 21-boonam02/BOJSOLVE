#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) 
{
	int B, c = 0, g, k,l;
	long int A = 1;
	int arr[1000];
	scanf("%d %d %d", &g, &k, &l);
	B = g;
	//A: 원하는 값;효율적 지수 알고리즘의 결과값
	//이진법으로 바꾸는 과정;
	do {

		arr[c++] = k % 2;
		//printf("%d\n", k % 2);
		k = k / 2;
		//printf("%d\n", k);
	} while (k != 0);

	for (int i = 0; i <= c - 1; i++) {
		if (arr[i] == 1) {
			A = A * B;
		}
		B = B * B;
	}
	/*int nmg;
	nmg = A % l;*/
	printf("%ld\n", A);
}
// 2^100에서 100번을 계산하는 데 10번만 계산한다!!!
//그만큼 효율적이다!!