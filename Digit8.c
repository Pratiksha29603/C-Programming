/*             *******  Problems on Digits  *******

Statement: Write a program which accept number from user and count frequency of such a
			digits which are less than 6.
			
			Input : 2395
			Output : 3
*******************************************************************************************
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
		
		if(iDigit<6) //Check For Less than 6
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
	printf("Count of Digits is less than 6 is:%d",iRet);
	
	return 0;
 }