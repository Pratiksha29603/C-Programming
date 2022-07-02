/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					
STATEMENT:Write a program which accept check whether the first 4 bit  is ON or Off
Input : 
Output :
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
	 UINT iMask=0X0000000f;	 // 0000 0000 0000 0000 0000 0000 0000 1111
						    //	 0    0    0    0    0    0     0   F
						
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