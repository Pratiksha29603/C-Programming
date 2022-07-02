/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT:2. Accept number from user and display below pattern.
INPUT:5
OUTPUT:5#4#3#2#1#

**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern(int iNo)
{
	int iCnt=0;
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
	
		printf("%d#",iCnt);
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