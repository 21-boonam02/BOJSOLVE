#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int A=1,B,c=0, g, k;
	int arr[1000];
	printf("���� �Է�: ");
	scanf("%d %d", &g, &k);
	B = g;
	//A: ���ϴ� ��;ȿ���� ���� �˰����� �����
	//���������� �ٲٴ� ����;
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
// 2^100���� 100���� ����ϴ� �� 10���� ����Ѵ�!!!
//�׸�ŭ ȿ�����̴�!!