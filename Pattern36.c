/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT:5. Accept number from user and print below pattern (using for loop)

Input : iRow = 4 iCol = 4
Output : 
1 2 3 4
1 * * 4
1 * * 4
1 2 3 4
 
**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern(int iNo1,int iNo2)
{
	int i=0,j=0;
	
	for(i=1;i<=iNo1;i++)
	{
		for(j=1;j<=iNo2;j++)
		{
			if(i==1||i==iNo1||j==1|j==iNo2)
			{
				printf("%d\t",j);
			}
			else
			{
				printf("@\t");
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