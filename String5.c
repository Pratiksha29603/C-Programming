/* 	*****************PROBLEMS ON STRING**************************

STATEMENT: Accept string  
Input : 
Output : 
**********************************************************************************
*/

#include<stdio.h>

int main()
{
	char Arr[20];
	printf("Enter your name:\n");
	scanf("%[^'\n']s",Arr);
	printf("Ur Name is:%s",Arr);
	
	return 0;
}