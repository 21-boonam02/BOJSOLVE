#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�ϴ� sequential mode ���������� �Ҷ���, random �϶��� ���� �������
// w�� ���� ���� ���Ͽ� �ٰ� ���� ����̰�, 
//r ��� �϶��� ���Ͽ� �ִ� ���� �а� ����ϴ� �� �ϴ� ����!!
int main(void) 
{
	printf("%d\t%d\t%d\t\n", sizeof(char), sizeof(float), sizeof(double));
	FILE* cfPtr;

	if ((cfPtr = fopen("clients.txt", "w")) == NULL)
	{
		puts("File could not be opened");
	}
	else
	{
		puts("Enter the account, name, and balance.");
		puts("Enter EOF");
		printf("%s", "? ");

		int account;
		char name[30];
		double balance;
		//printf("%-10s%-13s%s\n", "Account", "name", "balance");
		//fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
		scanf("%d%29s%lf", &account, name, &balance);

		while (!feof(stdin))
		{
			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("%s", "? ");
			//printf("%-10d%-13s%7.2f\n",account,name,balance);
			//fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
			scanf("%d%29s%lf", &account, name, &balance);
		}
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