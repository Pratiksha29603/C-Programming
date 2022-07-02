/*
***************************************2D Array*********************************************************
Statement:    Create 2D array and insert number by using dynamin memory allocation 
**********************************************************************************************************
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int iRow=0,iCol=0,i=0,j=0;
	int *ptr=NULL;
	printf("Enter the value of row:\n");
	scanf("%d",&iRow);
	
	printf("Enter the value of column:\n");
	scanf("%d",&iCol);
	
	ptr=(int*)malloc((iRow*iCol)*sizeof(int));
	
	for(i=0;i<(iRow*iCol);i++)
	{
		printf("%d",&ptr[i]);
	}
	
// access the elements from 2d array

	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%d\n",ptr[i][j]);
		}
	}
	
	return 0;
}