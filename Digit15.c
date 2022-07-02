/*             *******  Problems on Digits  *******

Statement: Accept number from user and print the reverse of that number
Input:5673
Output:3765
*/


#include<stdio.h> // Header file inclusion
 int DisplayReverse(int iNo)
 {
	int iRev=0;
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
		printf("%d\n",iDigit);
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10; 		
	
	}
	return iRev;
			
 }
 int main()  //entry point function
 {
	int iValue=0;
	int iRet=0;
	
	printf("Enter Nuber \n");
	scanf("%d",&iValue);
	
	iRet=DisplayReverse(iValue);  //function call
	printf("Reverse Digits is:%d",iRet);
	
	return 0;
 }