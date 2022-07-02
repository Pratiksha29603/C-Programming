/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: 1. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 	
			A B C D
			A B C D
			A B C D
			A B C D
 
**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern(int iNo1,int iNo2)
{
	int i=0,j=0;
	char ch='\0';
	for(i=1,ch='A';i<=iNo1;i++,ch++)
	{
		
		for(j=1,ch='A';j<=iNo2;j++,ch++)
		{
			printf("%c",ch);
			
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