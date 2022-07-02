/* 	******************************PROBLEMS ON N NUMBER**********************************

STATEMENT:  4. Accept N numbers from user and display all such numbers which contains
3 digits in it.
Input : N : 6
Elements : 8225 665 3 76 953 858
Output : 665 953 858
******************************************************************************************
*/

#include<stdio.h>   //Header File
#include<stdlib.h>

void Digit(int Arr[], int iSize)
{
	int i=0, iDigit=0;
	for(i=0;i<iSize;i++)
	{
		while(Arr[i]!=3)
		{
			iDigit=Arr[i]%10;
			Arr[i]=Arr[i]/10;
			//printf("Digit is:",Arr[i]);
		}
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
