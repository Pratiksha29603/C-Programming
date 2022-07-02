/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: Accept number from user and print below pattern (Using While loop)
INPUT:5
OUTPUT: *
		*
		*
		*
		*

**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern(int iNo)
{
	int iCnt=1;
	while(iCnt<=iNo)
	{
		printf("*\n");
		iCnt++;
	}
}

int main()
{
	int iValue=0;
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	DisplayPattern(iValue);
	return 0;

}