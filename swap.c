/* Program to swap numbers */


#include<stdio.h>

int main()
{
	int i=0,j=0,temp=0;
	
	printf("Enter numbers");
	scanf("%d %d",&i,&j);
	printf("\n numbers before swap:i=%d j=%d",i,j);
	temp=i;
	i=j;
	j=temp;
	printf("\n Numbers after swap : i=%d j=%d",i,j);
	
	return 0;
}