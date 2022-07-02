/* Program to display the entered number with trailing zeros and leading zeros  */


#include<stdio.h>

int main()
{
	int num=0;
	
	
	printf("Enter number:");
	scanf("%d",num);
	printf("\n %05d",num);
	printf("\n %5f",num*1000);
	
	return 0;
}