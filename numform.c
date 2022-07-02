/* Program to display hexadecimal and octal formats of entered number */


#include<stdio.h>

int main()
{
	int num=0;
	
	printf("Enter number \n");
	scanf("%d",&num);
	printf("\n Hexadecimal number=%x \t Octal number=%o \t Decimal number=%d",num,num,num);
	
	return 0;
}