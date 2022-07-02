/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  3. Accept N numbers from user check whether that numbers contains 11 in
				it or not.
Input : N : 6
Elements : 85 66 11 80 93 88
Output : 11 is present

Input : N : 6
Elements : 85 66 3 80 93 88
Output : 11 is absent
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize)
{
	int i=0;
	bool bAns=false;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==11)
		{
			bAns= true;
			break;  //break is used to terminate the loop
		}
	}
	return bAns;

}	
int main()
{
	int iLength=0, i=0;
	int *ptr=NULL;
	bool bRet=false;
	
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
	
	bRet=CheckNumber(ptr,iLength);
	if(bRet==true)
	{
		printf("Number is there\n");
	}
	else
	{
		printf("Number is not there\n");
	}
	free(ptr);
	return 0;
}