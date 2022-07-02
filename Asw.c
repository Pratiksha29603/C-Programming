 /*
 Reverse number of series from given number to 1.
 */
 
 #include<stdio.h>
 
 void Display( int iValue1)
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
	
	int i=iValue1;
	while( i>=1)
	{
		printf("%d\t ",i);
		i--;
		
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
 