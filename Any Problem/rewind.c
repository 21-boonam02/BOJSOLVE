#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//일단 sequential mode 연속적으로 할때고, random 일때는 따로 만들것임
// w일 때는 내가 파일에 다가 쓰는 모드이고, 
//r 모드 일때는 파일에 있는 것을 읽고 출력하는 ㄱ 하는 것임!!
int main(void)
{
	printf("%d\t%d\t%d\t\n", sizeof(char), sizeof(float), sizeof(double));
	FILE* cfPtr;

	if ((cfPtr = fopen("clients.txt", "r")) == NULL)
	{
		puts("File could not be opened");
	}
	else
	{
		printf("%s", "Enter request\n"
			"1 - List accounts with zero balances\n"
			"2 - list accounts with credit balances\n"
		"3 - list accounts with debit balacnes\n"
		"4 - End of run\n? ");
		int request;
		scanf("%d", &request);

		while (request != 4)
		{
			int account; 
			double balance;
			char name[30];
			fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
			switch (request)
			{
			case 1:
				puts("\nacccounts with zeoro balacnes:");

				while (!feof(cfPtr))
				{
					if (balance == 0)
					{
						printf("%-10d%-13s%7.2f\n", account, name, balance);
					}
					fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
				}
				break;

			case 2:
				puts("\nacccounts with credit balacnes:\n ");
				while (!feof(cfPtr))
				{
					if (balance > 0)
					{
						printf("%-10d%-13s%7.2f\n", account, name, balance);
					}
					fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
				}
				break;

			case 3:
				puts("\nacccounts with debit balacnes:\n ");
				while (!feof(cfPtr))
				{
					if (balance < 0)
					{
						printf("%-10d%-13s%7.2f\n", account, name, balance);
					}
					fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
				}
				break;
			}

			rewind(cfPtr);
			printf("%s", "\n? ");
			scanf("%d", &request);
		}
		puts("End of run,");
		fclose(cfPtr);
	}
}

/*Files : used for permanent retention of data
 end of file marker(eof): byte number;
stream; stdin(keyboard),stdout(screen),stderr(screen)
stream; communication cahnels between files and programs
FCB;file control back(file descriptor)
definition: operating system used to adminster a particular file

fgetc(getchar): reads one character from a file
fgetc(stdin): reades one char from stdin:== getchar()
fputc(putchar): write one character to afile
 fputc('a',stdout) ; write the character 'a' to stdout==putchar('a')
 fgets,fputs; read aline from a file, write a line to afile
 scanf(printf) fscanf,fprintf
 "w";
->*/