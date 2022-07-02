/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept 5 number from user and print addition of number.
Input : 1+2+3+4+5
Output : 15
**********************************************************************************
*/


#include<stdio.h>   //Header File

 int main()
 {
     
     int Arr[5];    //Array of 5 Elements
     int iSum =0,iCnt=0;
     
     printf("Enter Numbers:");
     
	 for(iCnt=0;iCnt<5;iCnt++)
	 {
		scanf("%d",&Arr[iCnt]);
	 }
     
     for(iCnt=0;iCnt<5;iCnt++)
	 {
		iSum=iSum+Arr[iCnt];
	 }
     
     printf("Addition is: %d\n",iSum);
     
     return 0;      //Return to OS
 }