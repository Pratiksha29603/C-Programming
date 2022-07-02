/*             *******  Problems on Digits  *******

Statement: Accept number from user and print the count Even digit from that number

*/


#include<stdio.h> // Header file inclusion
 int CountEven(int iNo)
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
		if(iDigit%2==0) //Check for Even
		{
			iCnt++;
		}
		iNo=iNo/10; 		
	
	}
	return iDigit;
			
 }
 int main()  //entry point function
 {
	int iValue=0;
	int iRet=0;
	
	printf("Enter Nuber \n");
	scanf("%d",&iValue);
	
	iRet=CountEven(iValue);  //function call
	printf("Count of Even Digits is:%d",iRet);
	
	return 0;
 }