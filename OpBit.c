/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					
STATEMENT:Write a program which accept 
Input : 
Output :
**********************************************************************************
*/

#include<stdio.h>
void DisplayBinary(int iNo)
{
	int iDigit=0;
	 while(iNo!=0)
	 {
		iDigit=iNo%2;
		printf("%d",iDigit);
		iNo=iNo/2;
	 }
}
int main()
{
	int iValue=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	DisplayBinary(iValue);
	return 0;
}