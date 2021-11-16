#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main()
{
	//z6
	int ii;

	printf("1 ciag: \n");
	for (ii = 1; ii <= 100; ii++)
	{
		printf("%d \n", ii);
	}

	printf("\n2 ciag: \n");
	for (ii = 100; ii >= 0; ii--)
	{
		printf("%d \n", ii);
	}

	printf("\n3 ciag: \n");
	for (ii = 7; ii <=77; ii+=7)
	{
		printf("%d \n", ii);
	}

	printf("\n4 ciag: \n");
	for (ii = 20; ii >= 0; ii-=2)
	{
		printf("%d \n", ii);
	}

	//z7

	int i, j;
	printf("\n1 petla: \n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
			printf("X");
		printf("\n");
	}

	printf("\n2 petla: \n");
	for (i = 9; i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
			printf("X");
		printf("\n");
	}

	printf("\n3 petla: \n");
	for (i = 10; i >= 0; i--)
	{
		for (j = i; j >= 0; j--)
			printf(" ");
		for (j = i; j < 10; j++)
			printf("X");

		printf("\n");
	}

	printf("\n4 petla: \n");
	for (i = 9; i >= 0; i--)
	{
		for (j = i; j < 10; j++)
			printf(" ");
		for (j = i; j >= 0; j--)
			printf("X");
		printf("\n");
	}

	


}