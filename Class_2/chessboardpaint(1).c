#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
 
int main(void)
{
	char black[2] = { 'B', 'W' };
	char white[2] = { 'W', 'B' };

	int row, col;
	char chess[51][51] = { 0 };

	scanf("%d%d", &row, &col);
	int cmr[2501] = {0, };
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf(" %c",&chess[i][j]);
		}
	}
	
	int min = row* col;
	for (int i = 0; i < row - 7; i++)
	{
		for (int j = 0; j < col - 7; j++)
		{
			int cnt,bcnt = 0,wcnt =0;
			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					if (chess[i+k][j+l] != black[(k+l)%2])
					{
						bcnt += 1;
					}
					if (chess[i + k][j + l] != white[(k+l)%2])
					{
						wcnt += 1;
					}
				}
			}
			cnt = (bcnt > wcnt) ? wcnt : bcnt;
			//printf("%d\n", cnt);
			if (cnt <= min)
			{
				min = cnt;
			}
		}
	}
	printf("%d", min);
	return 0;
}