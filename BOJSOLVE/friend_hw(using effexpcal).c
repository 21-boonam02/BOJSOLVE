#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) 
{
	int B, c = 0, g, k,l;
	long int A = 1;
	int arr[1000];
	scanf("%d %d %d", &g, &k, &l);
	B = g;
	//A: ���ϴ� ��;ȿ���� ���� �˰����� �����
	//���������� �ٲٴ� ����;
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
// 2^100���� 100���� ����ϴ� �� 10���� ����Ѵ�!!!
//�׸�ŭ ȿ�����̴�!!