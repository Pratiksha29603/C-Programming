/*             *******  Problems on Digits  *******

Statement: .Write a program which accept number from user and count frequency of 2 in it.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 9000
Output : 0
Input : 922432
Output : 3

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
		
		if(iDigit==2) //Check For Frequency
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
	printf("Count of 2 in Digits is :%d",iRet);
	
	return 0;
 }