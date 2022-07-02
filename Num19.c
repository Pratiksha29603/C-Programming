/* 	******PROBLEMS ON N NUMBER*********

STATEMENT:  Accept N (any type of) number from user and print the difference 
			btwn smallest and largest number 
			using function using pointer

Input : 10,20,30,40
Output : 30
****************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

int Diff(int Arr[], int iSize)
{
	int i=0,iDiff=0,iMin=Arr[0],iMax=Arr[0];
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}
		else
		{
			iMax=Arr[i];
		}
	}
	iDiff=iMax-iMin;
	return iDiff;
	
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
	
	iRet=Diff(ptr,iLength);
	printf("Smallest number is:%d\n",iRet);
	free(ptr);
	return 0;
}