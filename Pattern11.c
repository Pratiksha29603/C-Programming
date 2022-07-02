/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: Accept number from user and print below pattern (using for loop)
INPUT:8
OUTPUT: 2 4 6 8 10 12 14 16 

**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo*2;iCnt++)
	{
		if(iCnt%2==0)
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