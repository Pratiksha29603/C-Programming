/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept N number from user and print largest number among the numbers
			using function using pointer

Input : 10,12,32,40
Output : 40
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

int Max(int Arr[], int iSize)
{
	int i=0,iMax=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]>iMax)
		{
			iMax=Arr[i];
		}	
	}
	return iMax;
	
}

int main()
{
	int iLength=0, i=0;
	int *ptr=NULL;
	int iRet=0;
	
	printf("Enter number of element\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
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
	
	iRet=Max(ptr,iLength);
	printf("Largest number is:%d\n",iRet);
	free(ptr);
	return 0;
}