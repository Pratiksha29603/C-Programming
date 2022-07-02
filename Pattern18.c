/* 	*****************PROBLEMS ON PATTERN PRINTING**************************

STATEMENT: Accept number from user and print below pattern 
INPUT:   5
OUTPUT:       *       #       *       #       *

**********************************************************************************
*/


#include<stdio.h>

 void DisplayPattern(int iNo)
 {
    int iCnt=0;
    
    for(iCnt=0; iCnt<=iNo; iCnt++)
    
     if((iCnt % 2)== 0)
    {
        printf("#\t");
    }
    else
    {
       printf("*\t"); 
    }
 }
 
 int main()
 {
     int iValue=0;
     
     printf("Enter the Number: ");
     scanf("%d",&iValue);
     
     DisplayPattern(iValue);
     
     return 0;
 }