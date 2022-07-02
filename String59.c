/* 	*****************PROBLEMS ON STRING**************************
					
STATEMENT:Write a program which accept string from user and Reverse that string
			or implement your own strRev function
Input : ABCDE
Output :EDCBA
**********************************************************************************
*/

#include<stdio.h>

void strrevX(char *start)
{
	char *end=start;
	char temp;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		
		start++;
		end--;
	}
		
}
int main()
{
	char cArr[30];

	printf("Enter a String:\n");
	scanf("%[^'\n']s",cArr);
	
	strrevX(cArr);//chkPalindrome(50)
	printf("Revrse string is:%s\n",cArr);
	
	return 0;
}