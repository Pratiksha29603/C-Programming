/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: Accept number from user and print below pattern (using for loop)
INPUT:4
OUTPUT: 4 3 2 1

**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern(int iNo)
{
	int iCnt=0;
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
	
		printf("%d\t",iCnt);
	}
}

int main()
{
	int iValue=0;
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	DisplayPattern(iValue);
	return 0;

}