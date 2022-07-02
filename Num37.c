/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  4. Accept N numbers from user and accept Range, Display all elements from
			that range
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 66 76 88

Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output :
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>


void CheckFirstOccurance(int Arr[], int iSize, int iStart, int iEnd)
{
	int i=0,Diff=0;
	
	for(i=0;i<iSize;i++)
	{
		if((Arr[i]>=iStart)&& (Arr[i]<=iEnd))
		{
			printf("%d\n",Arr[i]);
			Arr[i]++;
		}
	}	
	
}
int main()
{
	int iLength=0, i=0,iValue1=0,iValue2=0,iRet=0;
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
	
	printf("Enter the Starting element:\t");
	scanf("%d",&iValue1);
	
	printf("Enter the Ending element:\t");
	scanf("%d",&iValue2);
	
	CheckFirstOccurance(ptr,iLength,iValue1,iValue2);
	
	free(ptr);
	return 0;
}