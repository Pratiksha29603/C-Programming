/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					Assignment 27
STATEMENT:3.Write a program which checks whether 7th & 15th & 21st , 28th bit
			is On or OFF
Input : 
Output :
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
	 UINT iMask=0X08104040;	 // 0000 1000 0001 0000 0100 0000 0100 0000
						    //	 0    8    1    0    4    0     4   0
						
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