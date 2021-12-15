#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int buy(int);
int sell(int);

int updates[SIZE] = { 5,-4,-2,-1,3,-2 };

int main(int argc, char** argv) 
{
	int upd;
	unsigned long int inventory;
	for (int i = 0; i < SIZE; i++) 
	{
		inventory = (upd = updates[i]) < 0 ? sell(upd) : buy(upd);
	}
	printf("%ld\n", inventory);

}

unsigned long int inventory = 0;

int buy(int a)
{
	return inventory += a;

}

 int sell(int a)
{
	 int t;
	 return (t = inventory + a) < 0 ? 0 : t;

}
