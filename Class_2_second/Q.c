#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 10001

//먼저 q를 배열로 구현한 다음 다음에는 연결리스트로 구현 할 예정
//그냥 q는 배열로 구현한 후 원형 큐는 연결 리스트로 구현을 할 예정
void push(int x);//enqueue
void pop();//dequeue
int full();//꽉 차있는지 확인 근데 , 출력을 안하기 때문에 return 필요
void empty();//비어 있는지 확인 비면 1, 안 비면 0.
void size();//큐에 들어있는 정수의 개수 출력
void front();//앞에 있는 정수 출력
void back();//뒤에 있는 정수 출력

int q[MAX_SIZE] = { 0, };
// -1부터 하는 이유는 배열에서는 0부터 숫자를 카운트 하기 때문이다.
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
//꽉 찼는지 확인하는 함수
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
// 비어있는지 확인
//https://code-lab1.tistory.com/6 큐를 연결 리스트로 구현하기