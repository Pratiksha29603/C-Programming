/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept 5 number from user and print addition of number.
			using function using pointer

Input : 1+2+3+4+5
Output : 15
**********************************************************************************
*/


#include<stdio.h>   //Header File

int Addition(int *Brr,int iSize)
{
	int iCnt=0,iSum=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	 {
		iSum=iSum+(*Brr);
		Brr++;
	 }
	 return iSum;
		
}

 int main()
 {
     
     int Arr[5];    //Array of 5 Elements
     int iRet=0,iCnt=0;
     printf("Enter Numbers:");
     
	 for(iCnt=0;iCnt<5;iCnt++)
	 {
		scanf("%d",&Arr[iCnt]);
	 }
     iRet=Addition(Arr,5);
     
     
     printf("Addition is: %d\n",iRet);
     
     return 0;      //Return to OS
 }