/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:accept the string from user and count Capital Letter in string
Input : Hello
Output : 1
**********************************************************************************
*/

#include<stdio.h>

void CapitalCount(char *str)
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