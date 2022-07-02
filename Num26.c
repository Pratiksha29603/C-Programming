/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  1. Accept N numbers from user and return difference between summation
			   of even elements and summation of odd elements.

Input : N : 6
Elements : 85 66 3 80 93 88

Output : 53 (234 - 181)
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
	int i=0,iSumEven=0, iSumOdd=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2!=0)  //(Arr[i]%2==1)
		{
			iSumOdd=iSumOdd+Arr[i];
		}
		else
		{
			iSumEven=iSumEven+Arr[i];
		}
	}
	
	return  iSumEven-iSumOdd;
	
}

int main()
{
	int iLength=0, i=0;
	int *ptr=NULL;
	int iRet=0;
	
	printf("Enter number of element\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	if(ptr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
		
	printf("Entered data is:\n");
	for(i=0;i<iLength;i++)
	{
		printf("%d\t",ptr[i]);
	}
	
	iRet=Difference(ptr,iLength);
	printf("Result is:%d\n",iRet);
	free(ptr);
	return 0;
}