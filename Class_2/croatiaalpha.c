#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int cnt=0;
	char word;
	while (( word = getchar()) != '\n')
	{
		switch (word)
		{
		case 'c=':
			++cnt;
			break;

		case 'c-':
			++cnt;
			break;

		case 'dz=':
			++cnt;
			break;

		case 'd-':
			++cnt;
			break;

		case 'lj':
			++cnt;
			break;

		case 'nj':
			++cnt;
			break;

		case 's=':
			++cnt;
			break;

		case 'z=':
			++cnt;
			break;
		
		default:
			{
			cnt++;
			break;
			}
		}
	}
	printf("%d\n", cnt);
	return 0;
}

