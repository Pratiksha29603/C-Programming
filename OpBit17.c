/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					Assignment 28
STATEMENT:5. Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input : 73
Output : 79
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
 
 UINT ToggleNibble(UINT iNo)
 {
	int iStart=5;
	UINT iMask= 0x00000001, iResult=0;
	iMask= iMask<<(i);
	
	iResult= iNo|iMask;
	
	return iResult;
	
 }
 
 int main()
 {
	int iValue=0, iRet=0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);

	iRet=ToggleNibble(iValue);
	printf("Updated Number is:%d",iRet);
	return 0;
 }