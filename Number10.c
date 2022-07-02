
/*             *******  Problems on Number  *******

Statement:Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
Input : 10 18
Output : 126

*/
#include<stdio.h>
int RangeSum(int iStart , int iEnd)
{

	int iDiff=0,iSum;
	for(iDiff=iStart;iDiff<=iEnd;iDiff++)
	{
		iSum=iSum+iDiff;
	}
	return iSum;
}
int main()
{
	int iValue1 = 0, iValue2 = 0, iRet=0;
	printf("Enter starting point:");
	scanf("%d",&iValue1);
	printf("Enter ending point:");
	scanf("%d",&iValue2);
	iRet=RangeSum(iValue1, iValue2);
	printf("Addition of Range is:%d",iRet);
	return 0;
}
