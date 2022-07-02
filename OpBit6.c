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
bool CheckBit(UINT iNo, UINT iPos)
{
	 UINT iMask=0X00000001; // 0000 0000 0000 0000 0000 0000 0000 0000
						    //	 0    0    0    0    0    0     0   0
							//   32   28   24   20   16   12    8   4
	 UINT iResult=0;
	
	if((iPos<1) || (iPos>32)) //Filter
	{
		return false;
	}
	
	iMask= iMask << (iPos-1);
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
	UINT iValue=0, iBit=0;
	bool bRet= false;
	printf("Enter Number:\t\n");
	scanf("%d",&iValue);
	
	printf("Enter Position:\t\n");
	scanf("%d",&iBit);
	
	bRet=CheckBit(iValue,iBit);
	
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