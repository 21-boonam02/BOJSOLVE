#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
 
int main(void)
{
	//���� �� ���� ����� ü�� ���带 ����.
	char black[9][9];
	char white[9][9];
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				black[i][j] = 'B';
				white[i][j] = 'W';
			}
			else
			{
				black[i][j] = 'W';
				white[i][j] = 'B';
			}
		}
	}
	int N, M;
	char chess[51][51] = { 0 };

	scanf("%d%d", &N, &M);
	int cmr[2501] = {0, };
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			// �� �տ� ���Ⱑ �߿��� ����??
			scanf(" %c",&chess[i][j]);
		}
	}
	//printf("%c\n", chess[7][7]);
	int min = M * N;
	for (int i = 0; i < N - 7; i++)
	{
		for (int j = 0; j < M - 7; j++)
		{
			int cnt,bcnt = 0,wcnt =0;
			for (int k = 0; k < 8; k++)
			{
				for (int l = 0; l < 8; l++)
				{
					if (chess[i + k][j + l] != black[k][l] )
					{
						bcnt += 1;
					
					}
					if (chess[i + k][j + l] != white[k][l])
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