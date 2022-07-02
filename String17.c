/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:accept the alphabet from user and convert it into small letter
Input : A
Output : a
**********************************************************************************
*/

#include<stdio.h>

char CapitalToSmall(char c)
{
	
	
	if((c>='A')&&(c<='Z'))
	{

		return c+32;
	}
	
}
		

int main()
{
	
	char ch='\0';
	char cRet='\0';
	
	printf("Enter Character \n");
	scanf("%c",&ch);
	cRet=CapitalToSmall(ch);
	printf("Small letter is :%c\n",cRet);
}