/* 	*****************PROBLEMS ON STRING**************************
					Assignment :26 (LB) 
STATEMENT:Write a program which accept string from user and check wheather that 
			string is palindrome or not
Input : ABCBA
Output :ABCBA
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>


bool ChkPalindrome(char *str)
{
	bool flag=true;
	char *Start=NULL;
	char *End=NULL;
	
		Start=str; //pointing starting point to string
		End=str;	//initially pointing to string starting point
		while(*End!='\0')
		{
			End++;
		}
		End--;  //now pointing end point od string
		
		while(Start < End)
		{
			if(*Start!= *End)
			{
				flag=false;
				break;
			}
			Start++;
			End--;
		}
}
int main()
{
	char cArr[30];
	bool bRet=false;
	
	printf("Enter a String:\n");
	scanf("%[^'\n']s",cArr);
	
	bRet=ChkPalindrome(cArr);//chkPalindrome(50)
	if(bRet==true)
	{
		printf("it is Palindrome\n");
	}
	else
	{
		printf("it is not Palindrome\n");
	}
	return 0;
}