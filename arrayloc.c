/* Program to accept 5 elements store them in an array and display result
 */


#include<stdio.h>

int main()
{
	int arr[5];
	int i=0;
		
		printf("\nEnter number:");
		scanf("%d",&arr[3]);
		
		printf("\nEnter number:");
		scanf("%d",&arr[0]);
		
		printf("\nEnter number:");
		scanf("%d",&arr[4]);
		
		printf("\nEnter number:");
		scanf("%d",&arr[2]);
		
		printf("\nEnter number:");
		scanf("%d",&arr[1]);
		
		printf("\n%d is stored at %d location of array",arr[3],&arr[3]);
		printf("\n%d is stored at %d location of array",arr[0],&arr[0]);
		printf("\n%d is stored at %d location of array",arr[4],&arr[5]);
		printf("\n%d is stored at %d location of array",arr[2],&arr[2]);
		printf("\n%d is stored at %d location of array",arr[1],&arr[1]);
		
		printf("\n%d is stored at %d location of array",arr[0],&arr[0]);
		printf("\n%d is stored at %d location of array",arr[1],&arr[1]);
		printf("\n%d is stored at %d location of array",arr[2],&arr[2]);
		printf("\n%d is stored at %d location of array",arr[3],&arr[3]);
		printf("\n%d is stored at %d location of array",arr[4],&arr[4]);
		
	return 0;
}