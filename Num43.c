/* 	******************************PROBLEMS ON N NUMBER**********************************

STATEMENT:  5. Accept N numbers from user and display summation of digits of each
number.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 17 17 3 13 17 21
******************************************************************************************
*/

#include<stdio.h>   //Header File
#include<stdlib.h>

void Digit(int Arr[], int iSize)
{
	int i=0, iDigit=0,iSum=0;
	for(i=0;i<iSize;i++)
	{
		while(Arr[i]!=0)
		{
			iDigit=Arr[i]%10;
			iSum=iSum+iDigit;
			Arr[i]=Arr[i]/10;
		}
		printf("Addition of Digit is:%d\n",iSum);
	
	}	
	
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
	
	Digit(ptr,iLength);
	
	free(ptr);
	return 0;
}
