/*             *******  Problems on Digits  *******

Statement: Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits.
Input : 2395
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)

*/


#include<stdio.h> // Header file inclusion
 int Count(int iNo)
 {
	int Even=0,Odd=0,Diff=0;
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
		printf("%d\t",iDigit);
		if(iDigit%2==0)
		{
			Even=Even+iDigit;
		}
		else
		{
			Odd=Odd+iDigit;
		}
		iNo=iNo/10; 		
	
	}
	Diff=Even-Odd;
	return Diff;
			
 }
 int main()  //entry point function
 {
	int iValue=0;
	int iRet=0;
	
	printf("Enter Nuber \n");
	scanf("%d",&iValue);
	
	iRet=Count(iValue);  //function call
	printf("difference between summation of even digits and summation of odd digits is :%d",iRet);
	
	return 0;
 }