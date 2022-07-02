/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:accept the string from user and count Capital & Small Letter in string
Input : Hello
Output : capital:1
		 small:4
**********************************************************************************
*/

#include<stdio.h>

void Count(char *str)
{
	int CCount=0, SCount=0;
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			CCount++;
		}
		else if((*str>='a')&&(*str<='z'))
		{
			SCount++;
		}
		str++;
	}
	printf("Capital letter Are :%d\n",CCount);
	printf("Small letter Are :%d\n",SCount);
}
		

int main()
{
	
	char Arr[20];

	printf("Enter String \n");
	scanf("%[^'\n']s",Arr);
	
	Count(Arr);
	return 0;
	
}