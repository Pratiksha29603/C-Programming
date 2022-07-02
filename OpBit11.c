/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					Assignment 27
STATEMENT:4. Write a program which checks whether 7th & 8th & 9th bit is On or
OFF.
Input : 
Output :
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
	 UINT iMask=0X000001C0;	 // 0000 0000 0000 0000 0000 0001 1100 0000
						    //	 0    0    0    0    0    1     C   0
						
	 UINT iResult=0;
	
	iResult= iNo&iMask;
	
	if(iResult==iMask)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int main()
{
	UINT iValue=0;
	bool bRet= false;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf(" Bits are ON\n");
	}
	else
	{
		printf(" Bits are OFF\n");
	}
	
	return 0;
}