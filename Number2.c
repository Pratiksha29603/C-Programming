
/*             *******  Problems on Number  *******

Statement: Write a program which accept number from user and display power of the number
Input:
Output:

*/
#include<stdio.h>
int Power(int,int);

int main()
{
      int iValue1=0, iValue2=0;
	 
      int iRet=0;
      printf("Enter Number: ");
      scanf("%d",&iValue1);
	  printf("Enter Number: ");
      scanf("%d",&iValue2);
	  
	 iRet=Power(iValue1,iValue2);
	 printf("Result is:%d",iRet);
	  return 0;
}
int Power(int x,int y)
{
		int iCnt=0;
	 int iPower=1;
	 
	 if(x<0)
	 {
		x=-x;
	 }
	 
	 if(y<0)
	 {
		y=-y;
	 }
	 
	 
	/*while(y!=0)
	{
		iPower=iPower*x;
		y--;
	}
	printf("%d",iPower);*/
	
	for(iCnt=1;iCnt<=y;iCnt++)
	{
		iPower=iPower*x;
	}
	return iPower;
}