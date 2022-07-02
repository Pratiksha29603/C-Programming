/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept 5 number from user and print even number.
			using function using pointer

Input : (1+2+3+4+5)/5
Output : 15
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
	int iCnt=0,i=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2==0)
		{
			iCnt++;
		}
	}
	return iCnt;
	
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
	
	iRet=CountEven(ptr,iLength);
	printf("Even Number is:%d\n",iRet);
	free(ptr);
	return 0;
}