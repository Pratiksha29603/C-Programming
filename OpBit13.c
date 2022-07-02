/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					Assignment 28
STATEMENT:1.Write a program which accept one number from user and off 7th bit of that
			number if it is on. Return modified number.
Input : 79
Output : 15
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
int ToggleBit(int iNo)
 {
	int iMask= 0x00000001;
	int iResult=0;
	int iPos=7;
	if((iPos<1)||(iPos>32)) //filter
	{
		return 0;
	}
	
	iMask=iMask<<(iPos-1);
	
	iResult=iNo^iMask;
	
	return iResult;
	
 }
 
 int main()
 {
	int iValue=0, iRet=0, i=0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);

	iRet=ToggleBit(iValue);
	printf("Updated Number is:%d",iRet);
	return 0;
 }