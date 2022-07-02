/* Program to wish Hello to user */


#include<stdio.h>

int main()
{
	char name[10];
	
	printf("Enter name \n");
	scanf("%s",name);
	printf("Hello %s Welcome to the World of C", name);
	
	return 0;
}