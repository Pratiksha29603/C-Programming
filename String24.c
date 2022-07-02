/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:2. Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char c)
{
	
	if((c>='A')&&(c<='Z'))
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
	bRet=CheckCapital(ch);
	if(bRet==true)
	{
		printf("It is capital\n");
	}
	else
	{
		printf("It is not capital\n");
	}
	return 0;
}