/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
**********************************************************************************
*/

#include<stdio.h>
void DisplayTable()
{
	int i=0;
	
	printf("ASCII table is\n");
	printf("****************************************************************\n");
	
	printf("Decimal\t Hexadecimal \t Ocatl \t Character\n");
	printf("****************************************************************\n");
	for(i=0;i<127;i++)
	{
		printf("%d\t%x\t%o\t%c\n",i,i,i,i);
	}
	printf("****************************************************************\n");
}
		

int main()
{
	
	DisplayTable();
	return 0;
}