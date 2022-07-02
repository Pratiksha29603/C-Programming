/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:accept the string from user and count small Letter from string
Input : Hello
Output : 4
**********************************************************************************
*/

#include<stdio.h>

int SmallCount(char *str)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
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
	
	iRet=SmallCount(Arr);
	printf("Small letter Are :%d\n",iRet);
}