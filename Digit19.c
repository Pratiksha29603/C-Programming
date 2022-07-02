/*             *******  Problems on Digits  *******

Statement: Write a program which accept number from user and return multiplication of all
digits.
Input : 2395
Output : 270
Input : 1018
Output : 8
Input : 9440
Output : 144
Input : 922432
Output : 864

*/


#include<stdio.h> // Header file inclusion
 int Count(int iNo)
 {
	int iMul=1;
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
		
		iMul=iMul*iDigit;
		iNo=iNo/10; 		
	
	}
	return iMul;
			
 }
 int main()  //entry point function
 {
	int iValue=0;
	int iRet=0;
	
	printf("Enter Nuber \n");
	scanf("%d",&iValue);
	
	iRet=Count(iValue);  //function call
	printf("the multiplication of all digits is :%d",iRet);
	
	return 0;
 }