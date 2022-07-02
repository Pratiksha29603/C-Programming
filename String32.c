/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:5. Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65
		 Octal 0101
         Hexadecimal 0X41

**********************************************************************************
*/

#include<stdio.h>

void Display(char c)
{
	int iCnt=0;
	
	if((c>='A')&&(c<='Z'))
	{
		printf("Decimal\t Hexadecimal \t Ocatl \n");
		printf("%d\t%x\t%o\n",c,c,c);
	}
	if((c>='a')&&(c<='z'))
	{
		printf("Decimal\t Hexadecimal \t Ocatl \n");
		printf("%d\t%x\t%o\n",c,c,c);
	}
}
		

int main()
{
	
	char ch='\0';
	printf("Enter Character \n");
	scanf("%c",&ch);
	Display(ch);
	
}