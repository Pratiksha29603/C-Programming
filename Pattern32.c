/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT:1. Accept number from user and print below pattern (using for loop)

Input : iRow = 4 iCol = 4
Output : 
* # # #
* * # #
* * * #
* * * *
 
**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern(int iNo1,int iNo2)
{
	int i=0,j=0;
	
	if(iNo1!=iNo2)
	{
		printf("Plz enter row and column size same");
		return;
	}
	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			 if(i>=j)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");	
	}
}

int main()
{
	int iRows=0,iColumns=0;
	printf("Enter Number of Rows:\n");
	scanf("%d",&iRows);
	
	printf("Enter Number of Columns:\n");
	scanf("%d",&iColumns);
	
	DisplayPattern(iRows, iColumns);
	return 0;

}