/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:accept the string from user and count white spaces in string
Input : H e l l o
Output : 9
**********************************************************************************
*/

#include<stdio.h>

int SpaceCount(char *str)
{
	int iCnt=0;
	
	while(*str!='\0')
	{
			if(*str==' ');
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
	
	iRet=SpaceCount(Arr);
	printf("Spaces are :%d\n",iRet);
	return 0;
	
}