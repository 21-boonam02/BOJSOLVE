#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int A=1,B,c=0, g, k;
	int arr[1000];
	printf("숫자 입력: ");
	scanf("%d %d", &g, &k);
	B = g;
	//A: 원하는 값;효율적 지수 알고리즘의 결과값
	//이진법으로 바꾸는 과정;
	do{
		
		arr[c++] = k %2;
		k = k/2;
		print("%d ", k % 2);
	} while ( k != 0);

	for (int i = 0; i <= c-1; i++) {
		if (arr[i] == 1) {
			A = A * B;
		}
		B = B * B;
	}
	printf("%d\n", A);
}
// 2^100에서 100번을 계산하는 데 10번만 계산한다!!!
//그만큼 효율적이다!!