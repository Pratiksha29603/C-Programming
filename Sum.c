//Print Addition of Number 
 
 #include<stdio.h>
 
 int Addition( int iValue1)
 { 
	if(iValue1<0)  //Input Updator
	{
		iValue1=-iValue1;
	}
	
	int iCnt=0,iSum=0;
	for( iCnt=1;iCnt<=iValue1;iCnt++)
	{
		iSum=iSum+iCnt;
	}
		return iSum;
 }
 int main()
 {
	 int iNo1=0 , iRet=0;
	printf("Enter number \n");
	scanf("%d",&iNo1);
	
	iRet= Addition(iNo1);
	printf("Addition is:%d\t",iRet);
	return 0;
 }
 //flow of code 15->21->5->14->21->24