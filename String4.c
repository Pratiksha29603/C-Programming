/* 	*****************PROBLEMS ON STRING**************************

STATEMENT: Accept string  
Input : 
Output : 
**********************************************************************************
*/

#include<stdio.h>
void Display(char Brr[])
{
	printf("Name is:%s",Brr);
}
int main()
{
	char Arr[20];
	printf("Enter your name:\n");
	scanf("%[^'\n']s",Arr);
	Display(Arr);

	return 0;
}