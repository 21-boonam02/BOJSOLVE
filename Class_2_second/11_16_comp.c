#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


void print1Darray(int size, int* array);
void print2Darray(int row, int col, int** array);


int main(void)
{
	int arraySize;
	printf("%s", "Enter size of a one-dimensional array: ");
	scanf("%d", &arraySize);
	int *array = (int*)malloc(sizeof(int) * arraySize);
	//(int의 크기 *입력받은 크기) 만큼 동적 메모리 할당

	printf("Enter number of rows and colums in a 2-D array: ");
	int row1, col1;
	scanf("%d%d", &row1,&col1);
	int** array2D1 = (int**)malloc(sizeof(int*) * row1);

	for (int i = 0; i < row1; i++)
	{
		array2D1[i] = (int*)malloc(sizeof(int) * col1);
	}

	printf("Enter number of rows and colums in another 2-D array: ");
	int row2, col2;
	scanf("%d%d", &row2, &col2);

	int** array2D2 = (int**)malloc(sizeof(int*) * row2);
	for (int i = 0; i < row2; i++)
	{
		array2D2[i] = (int*)malloc(sizeof(int) * col2);
	}

	printf("\nsizeof(array) yields array size of %d bytes\n", sizeof(array));

	for (size_t i = 0; i < arraySize; i++)
	{
		array[i] = i * i;
	}

	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			array2D1[i][j] = i + j;
		}
	}
	for (int i = 0; i < row2; i++)
	{
		for (int j = 0; j < col2; j++)
		{
			array2D2[i][j] = i + j;
		}
	}

	puts("\nOne-dimensional array:");
	print1Darray(arraySize, array);

	puts("\nFirst two-dimensional array: ");
	print2Darray(row1, col1, array2D1);

	puts("\nSecond two-dimensional array: ");
	print2Darray(row2, col2, array2D2);

	free(array);
	for (int i = 0; i <row1 ; i++)
	{
		free(array2D1[i]);
	}

	for (int j = 0; j < row2; j++)
	{
		free(array2D2[j]);
	}
	return 0;
}

void print1Darray(int size, int *array)
{
	for (int i = 0; i < size; i++)
	{
		printf("array[%d] = %d\n",i,array[i]);
	}
}
void print2Darray(int row, int col, int** array)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			printf("%5d", array[i][j]);
		}
		puts("");
	}
}

//https://m.blog.naver.com/PostView.naver?
//isHttpsRedirect=true&blogId=jsky10503&logNo=221260798099
//reference