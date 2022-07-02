/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept 5 number from user and print average of number.
			using function using pointer

Input : (1+2+3+4+5)/5
Output : 15
**********************************************************************************
*/


#include<stdio.h>   //Header File
#include<stdlib.h>

float Average(int Brr[],int iSize)
{
	int iCnt=0,iSum=0;
	float fAvg=0.0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	 {
		iSum=iSum+Brr[iCnt];
	 }
	 fAvg= iSum/iSize;
	 return fAvg;
		
}

 int main()
 {
     
     int *Arr=NULL;    //Array of 5 Elements
     int iRet=0,iCnt=0,iLen=0;
	 
	 printf("Enter Number of Elements\n");
	 scanf("%d",&iLen);

	 Arr=(int*)malloc(sizeof(int)* iLen);
     printf("Enter Numbers:");
     
	 for(iCnt=0;iCnt<iLen;iCnt++)
	 {
		scanf("%d",&Arr[iCnt]);
	 }
	 
     iRet=Average(Arr,iLen);
    
     printf("Average is: %d\n",iRet);
     
	 free(Arr);
     return 0;      //Return to OS
 }