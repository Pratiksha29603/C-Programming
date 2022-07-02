//Print factorial of Number 
 
 #include<stdio.h>
 typedef unsigned long int UINT;
 UINT Factorial( int iValue1)
 { 
	UINT iSum=1;
	
	if(iValue1<0)  //Input Updator
	{
		iValue1=-iValue1;
	}
  int iCnt=0;
  
	for( iCnt=1;iCnt<=iValue1;iCnt++)
	{
		iSum=iSum*iCnt;
	}
		return iSum;
 }
 int main()
 {
	 int iNo1=0;
	UINT iRet=0;
	printf("Enter number \n");
	scanf("%d",&iNo1);
	
	iRet= Factorial(iNo1);
	printf("Factorial is:%llu\t",iRet);
	return 0;
 }
 //flow of code 15->21->5->14->21->24