/*             *******  Problems on Digits  *******

Statement: Write a program which accept number from user and check whether it contains 0
in it or not.
Input : 2395
Output : There is no Zero
Input : 1018
Output : It Contains Zero
Input : 9000
Output : It Contains Zero
Input : 10687
Output : It Contains Zero

*/


#include<stdio.h> // Header file inclusion
 #define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo)
 
 {
	int iCnt=0;
	int iDigit=0;
	
	if(iNo<0) // Input Updator
	{
		iNo=-iNo;
	}
	//Logic
	while(iNo!=0)  //while(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iDigit==0) //Check For Less than 6
		{
			return 1;
			
		}
		else
		{
			return 0;
		}	
		iCnt++;
		iNo=iNo/10; 		
		
	}
	return iCnt;
			
 }
 int main()  //entry point function
 {
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter Nuber \n");
	scanf("%d",&iValue);
	
	bRet= ChkZero(iValue);  //function call
	if(bRet == TRUE)
	{
		printf("It Contains Zero");
	}
	else
	{
		printf("There is no Zero");
	}
	
	return 0;
 }