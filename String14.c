/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:accept the alphabet from user and check whether it is small or not
Input : A
Output : it is small
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char c)
{
	
	if((c>='a')&&(c<='z'))
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
	bRet=CheckSmall(ch);
	if(bRet==true)
	{
		printf("It is small\n");
	}
	else
	{
		printf("It is not small\n");
	}
	return 0;
}