/*             *******  Problems on Digits  *******

Statement: Accept number from user and print the count Odd digit from that number

*/


#include<stdio.h> // Header file inclusion
 int CountOdd(int iNo)
 {
	int iCnt=0;
	int iDigit=0;
	if(iNo==0) //filter
	{
		return 0;
	}
	
	if(iNo<0) // Input Updator
	{
		iNo=-iNo;
	}
	//Logic
	while(iNo!=0)  //while(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iDigit%2!=0) //Check For Odd Digit
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
	
	iRet=CountOdd(iValue);  //function call
	printf("Count of Odd Digits is:%d",iRet);
	
	return 0;
 }