/* 	*****************PROBLEMS ON BITWISE OPERATOR**************************
					
STATEMENT:Write a program which accept check whether the bit is ON
			or Off
Input : 
Output :
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool CheckBit(UINT iNo, UINT iPos1, UNIT iPos2)
{
	 UINT iMask1=0X00000001; // 0000 0000 0000 0000 0000 0000 0000 0000
						    //	 0    0    0    0    0    0     0   0
							//   32   28   24   20   16   12    8   4
	 
	 UNIT iMask2=0X00000001;
	 UINT iResult=0;
	
	if(((iPos1<1) || (iPos1>32))&&((iPos2<1) || (iPos2>32))) //Filter
	{
		return false;
	}
	
	iMask1= iMask1 << (iPos-1);
	iMask2= iMask2 << (iPos-2);
	
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
	UINT iValue=0, iBit1=0, iBit2=0;
	bool bRet= false;
	printf("Enter Number:\t\n");
	scanf("%d",&iValue);
	
	printf("Enter 1st Position:\t\n");
	scanf("%d",&iBit1);
	
	printf("Enter  2nd Position:\t\n");
	scanf("%d",&iBit2);
	
	bRet=CheckBit(iValue,iBit1 ,iBit2);
	
	if(bRet==true)
	{
		printf(" Bits is ON\n");
	}
	else
	{
		printf(" Bits is OFF\n");
	}
	
	return 0;
}