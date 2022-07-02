/*             *******  Problems on Digits  *******

Statement: Accept number from user and print the count of the digit that number

*/


#include<stdio.h> // Header file inclusion
 int Display(int iNo)
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
		iCnt++;
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
	
	iRet=Display(iValue);  //function call
	printf("Count of Digits is:%d",iRet);
	
	return 0;
 }