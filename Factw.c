//Print factorial of Number 
 
 #include<stdio.h>
 typedef unsigned long int UINT;
 UINT Factorial( int iValue1)
 { 
	UINT iSum=1;
	int iCnt=0;
	
	if(iValue1<0)  //Input Updator
	{
		iValue1=-iValue1;
	}
	iCnt=1;
		while(iCnt<=iValue1)
		{
			iSum=iSum*iCnt;
			iCnt++;
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
	printf("Factorial is:%lu\t",iRet);
	return 0;
 }
 //flow of code 15->21->5->14->21->24