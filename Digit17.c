/*             *******  Problems on Digits  *******

Statement: Accept number from user and print number is palindrome or not using 2 functions
Input:121
Output:121 no is palindrome
*/


#include<stdio.h> // Header file inclusion
#include<stdbool.h>
bool Palindrome(int);
 int DisplayReverse(int);
 
 int main()  //entry point function
 {
	int iValue=0;
	bool bRet=false;
	
	printf("Enter Nuber \n");
	scanf("%d",&iValue);
	
	bRet=Palindrome(iValue);  //function call
	if(bRet ==true)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not Palindrome");
	}
	
	return 0;
 }
 
 bool Palindrome(int iInput)
{
	int iNumber=0;
	iNumber=Reverse(iInput);
	if(iNumber==iInput)
	{
		return true;
	}
	else
	{
		return false;
	}
}
 int Reverse(int iNo)
 {
	int iRev=0;
	int iDigit=0;
	
	//Logic
	while(iNo!=0)  //while(iNo>0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10; 		
	
	}
	return iRev;
}


 