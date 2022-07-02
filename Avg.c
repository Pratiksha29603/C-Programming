/* Program to accept 3 numbers and add them and find out average */


#include<stdio.h>

int main()
{
	int i=0, j=0,k=0, Total=0;
	float Average=1.0;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&i,&j,&k);
	Total=i+j+k;
	Average=Total/3;
	
	printf("\n The Total is %d \n Average id %f",Total, Average);
	
	return 0;
}