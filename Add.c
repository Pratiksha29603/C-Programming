/*
***********************************Programming in C*****************************************************
Statement: write a program which accept one number from user and print the addition of iteration till
			that number.
input:5
output:1,3,6,10,15
*********************************************************************************************************			
*/ 
 
 #include<stdio.h>
 
 void Addition( int iValue1)
 { 
	if(iValue1<0)  //Input Updator
	{
		iValue1=-iValue1;
	}
  int i=0,iSum=0;
	for( i=1;i<=iValue1;i++)
	{
		iSum=iSum+i;
		printf("%d\t ",iSum);
		
	}
 }
 int main()
 {
	 int iNo1=0 , iRet=0;
	printf("Enter number \n");
	scanf("%d",&iNo1);
	
	Addition(iNo1);
	
	return 0;
 }
 