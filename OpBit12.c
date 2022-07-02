/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					Assignment 27
STATEMENT:5. Write a program which checks whether first and last bit is On or
			OFF. First bit means bit number 1 and last bit means bit number 32.
Input : 
Output :
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
	 UINT iMask=0X80000001;	 // 1000 0000 0000 0000 0000 0000 0000 0001
						    //	 8    0    0    0    0    0     0   1
						
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