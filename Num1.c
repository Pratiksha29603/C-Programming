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
     int iSum =0;
     
     printf("Enter Numbers:");
     
     scanf("%d",&Arr[0]);
     scanf("%d",&Arr[1]);
     scanf("%d",&Arr[2]);
     scanf("%d",&Arr[3]);
     scanf("%d",&Arr[4]);
     
     iSum = Arr[0] + Arr[1] + Arr[2] + Arr[3] + Arr[4]; 
     
     printf("Addition is: %d",iSum);
     
     return 0;      //Return to OS
 }