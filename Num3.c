/* 	*****************PROBLEMS ON N NUMBER**************************

STATEMENT:  Accept 5 number from user and print addition of number.
Input : 
Output : 
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
     
     iSum = iSum+Arr[0];
	 iSum = iSum+Arr[1];
	 iSum = iSum+Arr[2];
	 iSum = iSum+Arr[3];
	 iSum = iSum+Arr[4];
     
     printf("Addition is: %d\n",iSum);
     
     return 0;      //Return to OS
 }