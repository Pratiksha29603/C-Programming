/* 	*****************PROBLEMS ON STRING**************************
					
STATEMENT:Write a program which accept string from user and Reverse that string
			or implement your own strRev function
Input : ABCDE
Output :EDCBA
**********************************************************************************
*/

#include<stdio.h>

void swap(char *p,char *q)
{
	char temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{
	char ch1,ch2;

	printf("Enter a First Character:\n");
	scanf("%c",&ch1);
	printf("Enter a Second Character:\n");
	scanf(" %c",&ch2);
	
	printf("Before swap :%c \t %c\n",ch1,ch2);
	swap(&ch1,&ch2);
	printf("Aftere swap :%c \t %c",ch1,ch2);
	return 0;
}