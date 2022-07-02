/* Program to print the content of the array using for loop */


#include<stdio.h>

int main()
{
	int arr[5]={10,20,30,40,50};
	int i=0;
	for(i=0;i<=4;i++)
	{
		printf("\n%d",arr[i]);
	}
	return 0;
}