/*             *******  Problems on Digits  *******

Statement: Accept number from user and print the Addition of even digit from that number

*/


#include<stdio.h> // Header file inclusion
 int SumEven(int iNo)
 {
	int iSum=0;
	int iDigit=0;
	
	if(iNo<0) // Input Updator
	{
		iNo=-iNo;
	}
	//Logic
	while(iNo!=0)  //while(iNo>0)
	{
		iDigit=iNo%10;
		
		if(iDigit%2==0) //Check For Even Digit
		{
			iSum=iSum+iDigit;
		}
		iNo=iNo/10; 		
	
	}
	return iSum;
			
 }
 int main()  //entry point function
 {
	int iValue=0;
	int iRet=0;
	
	printf("Enter Nuber \n");
	scanf("%d",&iValue);
	
	iRet=SumEven(iValue);  //function call
	printf("Addition of even Digits is:%d",iRet);
	
	return 0;
 }