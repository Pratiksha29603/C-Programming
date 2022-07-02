/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  2. Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 3

Input : N : 6
NO: 93
Elements : 85 66 3 66 93 88
Output : 4

Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : -1
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>


int CheckFirstOccurance(int Arr[], int iSize, int iNo)
{
	int i=0;
	
	for(i=iSize-1;i>=0;i--)
	{
		if(Arr[i]==iNo)
		{
			break;  //break is used to terminate the loop
		}
	}
	
	if(i==iSize)
	{
		return -1;
	}
	else
	{
		return i; // return is used to terminates the function
	}
}	
int main()
{
	int iLength=0, i=0,iValue=0,iRet=0;
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
	
	printf("Enter the element to search:\t");
	scanf("%d",&iValue);
	
	iRet=CheckFirstOccurance(ptr,iLength,iValue);
	printf("Number is occure on index:%d",iRet);
	free(ptr);
	return 0;
}