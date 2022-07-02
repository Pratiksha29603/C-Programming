
/*             *******  Problems on Number  *******

Statement: Write a program which accept number from user and display table
Input:9
Output:9 18 27 36 45 54 63 72 81 90

*/
#include<stdio.h>
void DisplayTable(int);

int main()
{
      int iValue=0;
	 
      
      printf("Enter Number: ");
      scanf("%d",&iValue);
	  
	  DisplayTable(iValue);
	  return 0;
}
void DisplayTable(int iNo)
{
	int iCnt=0;
	 int iMul=0;
	 if(iNo==0)
	 {
		return ;
	 }
	 if(iNo<0)
	 {
		iNo=-iNo;
	 }
	 
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		iMul=iCnt*iNo;
		printf("%d\n",iMul);
	}
}