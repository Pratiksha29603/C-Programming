/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: 3. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :  A A A A
		  B B B B
		  C C C C
		  D D D D 
 
**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern(int iNo1,int iNo2)
{
	int i=0,j=0;
	char ch='A';
	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			printf("%c",ch);
			
		}
		ch++;
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