/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  2. Accept N numbers from user and return difference between frequency of
               even number and odd numbers.
Input : N : 7
Elements : 85 66 3 80 93 88 90
Output : 1 (4 -3)
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
	int i=0,iEven=0,iOdd=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2==0)  //(Arr[i]%2==1)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}
	}
	return iEven-iOdd;
	
}

int main()
{
	int iLength=0, i=0;
	int *ptr=NULL;
	int iRet=0;
	
	printf("Enter number of element:\n");
	scanf("%d",&iLength);
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements:\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
		
	printf("Entered data is:\n");
	for(i=0;i<iLength;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\n");
	iRet=Frequency(ptr,iLength);
	printf("Frequency of even number is:%d\n",iRet);
	free(ptr);
	return 0;
}