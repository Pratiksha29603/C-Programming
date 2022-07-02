/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept N (any type of) number from user and check wheather
			the number is present or not(Searching)
			using function using pointer

Input : 11,20,30,40  (11)
Output : 11
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize)
{
	int i=0;
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==11)
		{
			break;  //break is used to terminate the loop
		}
	}
	
	if(i==iSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}	
int main()
{
	int iLength=0, i=0;
	int *ptr=NULL;
	bool bRet=false;
	
	printf("Enter number of element\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements\n");
	for(i=0;
	i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
		
	printf("Entered data is:\n");
	for(i=0;i<iLength;i++)
	{
		printf("%d\t",ptr[i]);
	}
	
	bRet=CheckNumber(ptr,iLength);
	if(bRet==true)
	{
		printf("Number is there\n");
	}
	else
	{
		printf("Number is not there\n");
	}
	free(ptr);
	return 0;
}