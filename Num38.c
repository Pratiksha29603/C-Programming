/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  5. Accept N numbers from user and return product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88
Output : 45

Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0
**********************************************************************************
*/


#include<stdio.h>   //Header Fil
#include<stdlib.h>


int CheckFirstOccurance(int Arr[], int iSize)
{
	int i=0, iOdd=1;
	
	for(i=0;i<=iSize;i++)
	{
		if(Arr[i]%2!=0)
		{
			iOdd=iOdd*i;
		}
	}return iOdd;	
	
}
int main()
{
	int iLength=0, i=0,iRet=0;
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
	
	iRet=CheckFirstOccurance(ptr,iLength);
	printf("Product is %d",iRet);
	free(ptr);
	return 0;
}