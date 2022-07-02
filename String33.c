/* 	*****************PROBLEMS ON STRING**************************
					Assignment :22 (LB)
STATEMENT:1.Write a program which accept string from user and count number of
capital characters.
Input : “Marvellous Multi OS”
Output : 4
**********************************************************************************
*/

#include<stdio.h>

int CapitalCount(char *str)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
	
}
		

int main()
{
	
	char Arr[20];
	int iRet=0;
	printf("Enter String \n");
	scanf("%[^'\n']s",Arr);
	
	iRet=CapitalCount(Arr);
	printf("Capital letter Are :%d\n",iRet);
}