/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept  number from user and print count the number which
			in between greater than 10 and less than 20	
				using function using pointer

Input : 10,12,32,40
Output : 1
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

int Count(int Arr[], int iSize)
{
	int i=0,iCnt=0;
	for(i=0;i<iSize;i++)
	{
		if((Arr[i]>10)&&(Arr[i]<20))
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
	
	iRet=Count(ptr,iLength);
	printf("count is:%d\n",iRet);
	free(ptr);
	return 0;
}