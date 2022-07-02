/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept 5 number from user and print addition of odd number.
			using function using pointer

Input : 1,2,3,4 
Output : 4
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

int SumOdd(int Arr[], int iSize)
{
	int i=0,iSum=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2!=0)  //(Arr[i]%2==1)
		{
			iSum=iSum+Arr[i];
			
		}
	}
	return iSum;
	
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
	
	iRet=SumOdd(ptr,iLength);
	printf("Addition of Odd is:%d\n",iRet);
	free(ptr);
	return 0;
}