/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
bool Check(char c)
{
	
	if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
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
	
	char ch='\0';
	bool bRet=false;
	
	printf("Enter Character \n");
	scanf("%c",&ch);
	bRet=Check(ch);
	if(bRet==true)
	{
		printf("It is Alphabet\n");
	}
	else
	{
		printf("It is not Alphabet\n");
	}
	return 0;
}