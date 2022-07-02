/*             *******  Problems on Digits  *******

Statement: Write a program which accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0
Input : 1018
Output : 0
Input : 9440
Output : 2
Input : 922432
Output : 1

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
		
		if(iDigit==4) //Check For frequency
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
	printf("Count of 4 in Digits is :%d",iRet);
	
	return 0;
 }