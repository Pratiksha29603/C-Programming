/* Program to display entered numbers with right justification and left justification*/


#include<stdio.h>

int main()
{
	int num=0;
	
	printf("Enter number");
	scanf("%d",&num);
	printf("the number(L):%d",num);
	printf("\n the number(R):%-d", num);
	
	return 0;
}