/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					
STATEMENT:Write a program which accept check whether the 21th bit of that 
			number is ON or Off
Input : 
Output :
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo)
{
	 UINT iMask=0X00100000;
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
		printf("21st Bit is ON\n");
	}
	else
	{
		printf("21st Bit is OFF\n");
	}
	
	return 0;
}