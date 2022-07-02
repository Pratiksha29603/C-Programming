/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:4. Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
bool CheckSymbol(char c)
{
	
	if((c=='!')||(c=='@')||(c=='#')||(c=='$')||
		(c=='%')||(c=='^')||(c=='&')||(c=='*'))
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
	bRet=CheckSymbol(ch);
	if(bRet==true)
	{
		printf("It is Special Symbol\n");
	}
	else
	{
		printf("It is not Special Symbol\n");
	}
	return 0;
}