#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//일단 sequential mode 연속적으로 할때고, random 일때는 따로 만들것임
// w일 때는 내가 파일에 다가 쓰는 모드이고, 
//r 모드 일때는 파일에 있는 것을 읽고 출력하는 ㄱ 하는 것임!!
//
struct clientdata
{
	int accnum;
	char lastname[15];
	char firstname[10];
	double balance;
};


int main(void)
{

	printf("%d\t%d\t%d\t\n", sizeof(long double), sizeof(struct clientdata), sizeof(double));
	FILE* cfPtr;

	if ((cfPtr = fopen("accounts.txt", "rb")) == NULL)
	{
		puts("File could not be opened");
	}
	else
	{
		struct clientdata client = { 0,"","",0.0 };

		printf("%s", "Enter account number" " (1 to 100, 0 to end input): ");
		scanf("%d", &client.accnum);
		
		while (client.accnum != 0)
		{
			printf("%s", "\nEnter lastname,firstname, balance: ");
			fscanf(stdin, "%14s%9s%lf", client.lastname,
				client.firstname, &client.balance);
			fseek(cfPtr, (client.accnum - 1) * sizeof(struct clientdata), SEEK_SET);
			fwrite(&client, sizeof(struct clientdata), 1, cfPtr);

			printf("%s", "\nEnter account num: ");
			scanf("%d", &client.accnum);

		}
		//for (int i = 1; i <= 100; i++)
		//{
		//	fwrite(&client, sizeof( struct clientdata), 1,cfPtr);
		//}
	}
	fclose(cfPtr);

	//FILE* fptr;
	//fptr = fopen("food.txt", "w+");
	//char* c = "i ate 3 pumpkins today.";
	//fwrite(c, sizeof(char), strlen(c), fptr);
	//fseek(fptr, 7, SEEK_SET);
	//fputs(" korean", fptr);
	//fseek(fptr, -6, SEEK_END);
	//fputs("top of the mountain", fptr);
	//fclose(fptr);

}
