/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  4. Accept N numbers from user and display all such elements which are
            multiples by 11.

Input : N : 6
Elements : 85 66 3 80 93 88

Output : 66,88
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
	int i=0,iCnt=0;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%11==0)  
		{
			printf("Number is :%d\n",Arr[i]);
			iCnt++;
			
		}
	}
	
	
}

int main()
{
	int iLength=0, i=0;
	int *ptr=NULL;
	
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
	printf("\n");
	
	Display(ptr,iLength);
	free(ptr);
	return 0;
}