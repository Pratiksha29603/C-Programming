/*             *******  Problems on Digits  *******

Statement: Write a program which accept number from user and return the count of digits in
between 3 and 7.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 4521
Output : 2
Input : 9922
Output : 0

*/


#include<stdio.h> // Header file inclusion
 int Count(int iNo)
 {
	int iCnt=0;
	int iDigit=0;
	if(iNo==0) //filter
	{
		return 1;
	}
	
	if(iNo<0) // Input Updator
	{
		iNo=-iNo;
	}
	//Logic
	while(iNo!=0)  //while(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iDigit>3&&iDigit<7) //Check For Frequency
		{
			iCnt++;
		}
		iNo=iNo/10; 		
	
	}
	return iCnt;
			
 }
 int main()  //entry point function
 {
	int iValue=0;
	int iRet=0;
	
	printf("Enter Nuber \n");
	scanf("%d",&iValue);
	
	iRet=Count(iValue);  //function call
	printf("the count of digits in between 3 and 7 is :%d",iRet);
	
	return 0;
 }