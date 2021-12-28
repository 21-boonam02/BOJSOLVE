#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 10001

//���� q�� �迭�� ������ ���� �������� ���Ḯ��Ʈ�� ���� �� ����
//�׳� q�� �迭�� ������ �� ���� ť�� ���� ����Ʈ�� ������ �� ����
void push(int x);//enqueue
void pop();//dequeue
int full();//�� ���ִ��� Ȯ�� �ٵ� , ����� ���ϱ� ������ return �ʿ�
void empty();//��� �ִ��� Ȯ�� ��� 1, �� ��� 0.
void size();//ť�� ����ִ� ������ ���� ���
void front();//�տ� �ִ� ���� ���
void back();//�ڿ� �ִ� ���� ���

int q[MAX_SIZE] = { 0, };
// -1���� �ϴ� ������ �迭������ 0���� ���ڸ� ī��Ʈ �ϱ� �����̴�.
int head = -1, rear = -1;

int main(void)
{
	int N,num;
	
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++)
	{
		char word[6];
		scanf("%s", &word);
		if (strcmp(word, "push") == 0)
		{
			scanf("%d", &num);
			push(num);
		}
		else if (!strcmp(word, "empty")) empty();
		else if (strcmp(word, "pop") == 0) pop();
		else if (strcmp(word, "size") == 0) size();
		else if (strcmp(word, "front") == 0) front();
		else if (strcmp(word, "back") == 0) back();
	}

}
//�� á���� Ȯ���ϴ� �Լ�
int full()
{
	if ((rear+1)%MAX_SIZE == head) return -1;
	else return 0;
}
void empty()
{
	if (head == rear) printf("%d\n", 1);
	else printf("%d\n", 0);
}
void size()
{
	if (head == rear) printf("%d\n", 0);
	else printf("%d\n", rear - head);
}
void front()
{
	if (rear != head) printf("%d\n", q[head + 1]);
	else printf("%d\n", -1);
}

void back()
{
	if (rear != head) printf("%d\n", q[rear]);
	else printf("%d\n", -1);
}

void push(int x)//enqueue
{
	q[++rear] = x;
}

void pop()//dequeue
{
	if (head == rear) printf("%d\n", -1);
	else
	{
		//head = (head + 1) % MAX_SIZE;
		printf("%d\n", q[++head]);
	}
}
// ����ִ��� Ȯ��
//https://code-lab1.tistory.com/6 ť�� ���� ����Ʈ�� �����ϱ�