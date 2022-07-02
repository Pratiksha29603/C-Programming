/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:accept the alphabet from user and check whether it is Digit or not
Input : 5
Output : it is Digit
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char c)
{
	
	if((c>='0')&&(c<='9'))
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
	bRet=CheckDigit(ch);
	if(bRet==true)
	{
		printf("It is Digit\n");
	}
	else
	{
		printf("It is not Digit\n");
	}
	return 0;
}