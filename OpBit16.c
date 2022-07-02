/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					Assignment 28
STATEMENT:4. Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.
Input : 137
Output : 713
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
 {
	UINT iMask1= 0x00000001, iMask2= 0x00000001,iMask=0, iResult=0;
	int iPos1=7,iPos2=10;
	if((iPos1<1)||(iPos1>32)) //filter
	{
		return 0;
	}
	
	if((iPos2<1)||(iPos2>32)) //filter
	{
		return 0;
	}
	
	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);
	
	iMask=iMask1|iMask2;
	
	iResult=iNo^iMask;
	
	return iResult;
	
 }
 
 int main()
 {
	UINT iValue=0, iRet=0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);

	iRet=ToggleBit(iValue);
	printf("Updated Number is:%d",iRet);
	return 0;
 }