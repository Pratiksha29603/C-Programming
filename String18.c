/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:accept the alphabet from user and convert it into according to need
Input : A
Output : a

Input : a
Output : A

**********************************************************************************
*/

#include<stdio.h>

char Toggle(char c)
{
	
	
	if((c>='A')&&(c<='Z'))
	{

		return c+32;
	}
	else if((c>='a')&&(c<='z'))
	{
		return c-32;
	}
	
}
		

int main()
{
	
	char ch='\0';
	char cRet='\0';
	
	printf("Enter Character \n");
	scanf("%c",&ch);
	cRet=Toggle(ch);
	printf("Conversion is :%c\n",cRet);
}