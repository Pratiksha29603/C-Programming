/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept N (any type of) number from user and check first occurance
			of that number(Searching)
			using function using pointer

Input : 11,20,30,40  (11)
Output : 0 index 
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>


int CheckFirstOccurance(int Arr[], int iSize, int iNo)
{
	int i=0;
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iNo)
		{
			break;  //break is used to terminate the loop
		}
	}
	
	if(i==iSize)
	{
		return -1;
	}
	else
	{
		return i; // return is used to terminates the function
	}
}	
int main()
{
	int iLength=0, i=0,iValue=0,iRet=0;
	int *ptr=NULL;
	
	
	printf("Enter number of element:\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements:\n");
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
	printf("\n");
	
	printf("Enter the element to search:\t");
	scanf("%d",&iValue);
	
	iRet=CheckFirstOccurance(ptr,iLength,iValue);
	if(i==-1)
	{
		printf("Number is not there\n");
	}
	else
	{
		printf("Number is occure on index:%d",iRet);
		
	free(ptr);
	return 0;
}