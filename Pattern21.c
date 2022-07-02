/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT:  print below pattern (With Hardcode values)

Input : iRow = 4 iCol = 3
Output : * * *
		 * * *
		 * * *
		 * * *

**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern()
{
	int iRow=4,iCol=3;
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*\t");
		}
		printf("\n");	
	}
}

int main()
{
	
	DisplayPattern();
	return 0;

}