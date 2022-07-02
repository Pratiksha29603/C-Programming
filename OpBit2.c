/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					
STATEMENT:Write a program which accept check whether the 4th bit of that 
			number is ON or Off
Input : 
Output :
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
	 int iMask=0X00000008;
	int iResult=0;
	
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
	int iValue=0;
	bool bRet= false;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf("4th Bit is ON\n");
	}
	else
	{
		printf("4th Bit is OFF\n");
	}
	
	return 0;
}