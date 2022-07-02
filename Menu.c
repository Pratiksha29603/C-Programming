/* Display Menu for operation and accept choice number from user */

/* Accept First Character from user and show his Post / Designation of user*/

#include<stdio.h>
int Menu(int iNo)
{ 
	int code=0;
	printf("\nEnter Post Code from 1-4\n");
	scanf("%d",&code);
	
	if(code==1)
	{
		printf("\nThe square of a number is %d",iNo*iNo);
			
	}
	else if(code==2)
	{
		printf("\nThe Cube of a number is %d",iNo*iNo*iNo);
			
	}
	else if(code==3)
	{
		printf("\nThe equivalent octal of %d is %o ",iNo,iNo);
			
	}
	else if(code==4)
	{
		printf("\nequivalent hexadecimal pf %d is %x", iNo,iNo);
			
	}
	else
	{
	 printf("\nEnter Valid Character");
	}
	
}

int main()
{
	int iValue1=0, iRet=0;
	
	printf("\n\t 1. Square");
	printf("\n\t 2.Cube");
	printf("\n\t 3.Octal");
	printf("\n\t 4.Hexadecimal");
	printf("\nEnter number");
	scanf("%d",&iValue1);
	iRet= Menu(iValue1);
	return 0;
	
}