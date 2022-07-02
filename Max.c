/* Program to find out the greater of 2 Numbers*/


#include<stdio.h>

int main()
{

	int i=0,j=0,max=0;
	printf("Enter 2 numbers");
	scanf("\t%d\t%d",&i,&j);
	max=(i>j?i:j);
	printf("\n Greater Number is %d", max);
	
	return 0;
}