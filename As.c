/*
**********************************Number***************************************************************
Statement: Accept the number from user and reverse number of series from that number till 1.
input:5
output:5,4,3,2,1
*******************************************************************************************************
*/

 
 #include<stdio.h>
 
 void Display( int iValue1)
 { 
	
  int i=0;
	for( i=iValue1;i>=1;i--)
	{
		printf("%d\t ",i);
		
	}
 }
 int main()
 {
	 int iNo1=0;
	printf("Enter number \n");
	scanf("%d",&iNo1);
	
	Display(iNo1);
	
	return 0;
 }
 