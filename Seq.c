//number in reverse order using sign
 
 #include<stdio.h>
 
 void Display( signed int iValue1)
 { 
	if(iValue1==0) //Filter
	{
		printf("ur entered no is 0\n");
		return;
	}
	
	if(iValue1<0)  //Input Updator
	{
		iValue1=+iValue1;
	}
 signed int i=0;
	for( i=0;i>=iValue1;i--)
	{
		printf("%d\t ",i);
		
	}
 }
 int main()
 {
	signed int iNo1=0;
	printf("Enter number \n");
	scanf("%d",&iNo1);
	
	Display(iNo1);
	
	return 0;
 }
 