/*             *******  Problems on Digits  *******

Statement: Accept number from user and print the reverse order of that number
			using while loop with Function and print the addition of that number

*/


#include<stdio.h> // Header file inclusion
 int Display(int iNo)
 {
	int iSum=0;
	int iDigit=0;
	
	if(iNo<0) // Filter
	{
		iNo=-iNo;
	}
	//Logic
	while(iNo!=0)  //while(iNo>0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
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
	
	iRet=Display(iValue);  //function call
	printf("Addition of Digits is:%d",iRet);
	
	return 0;
 }