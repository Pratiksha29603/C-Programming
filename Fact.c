//Print Factorial of Number 
 
 #include<stdio.h>
 
 void Factorial( int iValue1)
 { 
	if(iValue1==0) //Filter
	{
		printf("ur entered no is 0\n");
		return;
	}
	
	if(iValue1<0)  //Input Updator
	{
		iValue1=-iValue1;
	}
	
  int i=0,iSum=1;
	for( i=1;i<=iValue1;i++)
	{
		iSum=iSum*i;
		printf("%d\t ",iSum);
		
	}
 }
 int main()
 {
	 int iNo1=0 , iRet=0;
	printf("Enter number \n");
	scanf("%d",&iNo1);
	
	Factorial(iNo1);
	
	return 0;
 }
 