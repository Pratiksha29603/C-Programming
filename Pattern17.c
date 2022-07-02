/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: 1. Accept number from user and display below pattern.
INPUT:5
OUTPUT: A B C D E

**********************************************************************************
*/


#include<stdio.h>
 
void DisplayPattern(int iNo)
{
	int iCnt=0;
	char j='\0';
	
	
			for(iCnt=1,j='a';iCnt<=iNo;iCnt++,j++)
			{
				printf("%c\t",j);
			}
			printf("\n");
}

int main()
{
	int iValue=0;
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	DisplayPattern(iValue);
	return 0;

}