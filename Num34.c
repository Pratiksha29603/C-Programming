/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  5. Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 2

Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : 0
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

int Frequency(int Arr[], int iSize,int iNo)
{
	int i=0,iCnt=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iNo)  
		{
			iCnt++;
		}
		
	}
	return iCnt;
	
}

int main()
{
	int iLength=0, i=0,iValue=0;
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
	
	printf("Enter the element to search:\t");
	scanf("%d",&iValue);
	iRet=Frequency(ptr,iLength,iValue);
	printf("Frequency of even number is:%d\n",iRet);
	free(ptr);
	return 0;
}