/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:4. Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
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