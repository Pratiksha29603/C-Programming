/*             *******  Problems on Digits  *******

Statement: Accept number from user and check whether that  number is palindrome or not

Input:121
Output:121
*/


#include<stdio.h> // Header file inclusion
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Palindrome(int iNo)
 
 {
	int iTemp=0;
	int iRev=0;
	int iDigit=0;
	iTemp=iNo;
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
		//printf("%d\n",iDigit);
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10; 		
	
	}
	printf("Reverse Number is:%d\n",iRev);
	if(iRev==iTemp)
	{
		return 1;
	}
	else
	{
		return 0;
	}
			
 }
 int main()  //entry point function
 {
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter Nuber \n");
	scanf("%d",&iValue);
	
	bRet=Palindrome(iValue);  //function call
	
	if(bRet == TRUE)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not Palindrome");
	}
	return 0;
 }