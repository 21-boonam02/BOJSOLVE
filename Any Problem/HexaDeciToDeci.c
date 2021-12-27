#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char sixteen[10],ch;
	int deci =0;
	int x = 0;
	
	scanf("%s", sixteen);
	//빼기 1을 해주어야 하는 이유 중 하나는 마지막값이 NULL 값이기 
	//때문에 당연히 빼기 1을 해주어야 정상적으로 코드가 작성될 수 있다.
	for (int i = strlen(sixteen)-1; i >= 0; i--)
	{
		ch = sixteen[i];
		if (ch >= 48 && ch <= 57)
		{
			deci += (int) (ch - 48) * pow(16, x);
		}
		else if (ch >= 65 && ch <= 70)
		{
			deci += (int) (ch - 55) * pow(16, x);
		}
		else if (ch >= 97 && ch <= 102)
		{
			deci += (int) (ch - 87) * pow(16, x);
		}
		x += 1;
	}
	printf("%d\n", deci);
}
