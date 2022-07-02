/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept 5 number from user and print addition of number.
Input : 
Output : 
**********************************************************************************
*/

#include<stdio.h>


int main()
{	
	int arr[5];
	int iSum=0;
	 printf("Enter Numbers\n");
	 scanf("%d",&arr[0]);
	 scanf("%d",&arr[1]);
	 scanf("%d",&arr[2]);
	 scanf("%d",&arr[3]);
	 scanf("%d",&arr[4]);
	 
	 iSum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
	 
	 printf("Addition is:%d\n",iSum);

	return 0;
}