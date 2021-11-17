#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int resident(int floor, int room);

int main(void)
{
	int T, k, n;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d%d", &k, &n);
		printf("%d\n",resident(k, n));
	}
}

int resident(int floor, int room)
{
	if (floor == 0)
	{
		return room;
	}
	else
	{
		int human = 0;
		for (int i = 1; i <= room; i++)
		{
			human += resident(floor-1, i);
		}
		return human;
	}
}
