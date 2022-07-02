/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:3. Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output :

**********************************************************************************
*/

#include<stdio.h>

void Display(char c)
{
	int iCnt=0;
	if((c>='A')&&(c<='Z'))
	{
		for(iCnt=c;iCnt<='Z';iCnt++)
		{
			printf("%c\t",c);
			c++;
		}	
	}
	if((c>='a')&&(c<='z'))
	{
		for(iCnt=c;iCnt>='a';iCnt--)
		{
			printf("%c\t",iCnt);
			
		}
	}
}
		

int main()
{
	
	char ch='\0';
	printf("Enter Character \n");
	scanf("%c",&ch);
	Display(ch);
	
}