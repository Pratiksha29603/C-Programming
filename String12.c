/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:Print ASCII Table
Input : 
Output : 
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