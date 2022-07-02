/* 	*****************PROBLEMS ON STRING**************************
					Assignment :26 (LB)
STATEMENT:Write a program which accept string from user and check wheather that 
			string contains vowels or not
Input : “Marvellous Python 2”
Output :5 vowels
**********************************************************************************
*/

#include<stdio.h>
int CountVowel(char *str)
{
		int iCnt=0;
		if(str==NULL)
		{
			return -1;
		}
		
		while(*str!='\0')
		{
			if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||
			    (*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
			{
				iCnt++;
			}
				str++;
		}
			return iCnt;
}
int main()
{
	char cArr[30];
	int iRet=0;
	
	printf("Enter a String:\n");
	scanf("%[^'\n']s",cArr);
	
	iRet=CountVowel(cArr);
	printf("Number on Vowels are:%d\n",iRet);
	return 0;
}