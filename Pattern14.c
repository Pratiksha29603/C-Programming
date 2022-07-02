/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: Accept number from user and print below pattern (using for loop)

Input : iRow = 3 iCol = 5
Output : 5 4 3 2 1
		 5 4 3 2 1
         5 4 3 2 1
**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern(int iNo1,int iNo2)
{
	int i=0,j=0;
	for(i=1;i<=iNo1;i++)
	{
		for(j=iNo2;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");	
	}
}

int main()
{
	int iRows=0,iColumns=0;
	printf("Enter Number of Rows:");
	scanf("%d",&iRows);
	
	printf("Enter Number of Columns:");
	scanf("%d",&iColumns);
	
	DisplayPattern(iRows, iColumns);
	return 0;

}