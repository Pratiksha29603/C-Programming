/* 	*****************PROBLEMS ON STRING**************************
					Assignment :22 (LB)
STATEMENT:3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6 (8-2)
**********************************************************************************
*/

#include<stdio.h>

int Difference(char *str)
{
	int iSmall=0, iCapital=0;
	
	
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			iSmall++;
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			iCapital++;
		}
		str++;
	}
	return iSmall-iCapital;
	
}
		

int main()
{
	
	char Arr[20];
	int iRet=0;
	printf("Enter String \n");
	scanf("%[^'\n']s",Arr);
	
	iRet=Difference(Arr);
	printf("Difference is :%d\n",iRet);
}