/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept 5 number from user and print Average of number.
			using function using pointer

Input : (1+2+3+4+5)/5
Output : 15
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
	int iSum=0, i=0;
	float fResult=0.0f;
	
	for(i=0;i<iSize;i++)
	{
		iSum=iSum+Arr[i];
	}
	printf("Addition of elements:%d\n",iSum);
	fResult=(float)iSum/(float)iSize; //explicit typecasting
	return fResult;
}

int main()
{
	int iLength=0, i=0;
	int *ptr=NULL;
	float fRet=0.0f;
	
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
	
	fRet=Average(ptr,iLength);
	printf("Average is:%f\n",fRet);
	free(ptr);
	return 0;
}