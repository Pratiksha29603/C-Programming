
/*             *******  Problems on Number  *******

Statement: 4.Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108
Input : 10 18
Output : 70
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range
*/
#include<stdio.h>
 int RangeSumEven(int iStart , int iEnd)
{
	int iDiff=0,iSum=0;
	if(iStart>iEnd)
	{
		printf("Invalid Input\n");
	}
	for(iDiff=iStart;iDiff<=iEnd;iDiff++)
	{
		if(iDiff%2==0)
		{
			iSum=iSum+iDiff;
		}
	}return iSum;
}
int main()
{
	int iValue1 = 0, iValue2 = 0,iRet=0;
	printf("Enter starting point:");
	scanf("%d",&iValue1);
	printf("Enter ending point:");
	scanf("%d",&iValue2);
	iRet= RangeSumEven(iValue1, iValue2);
	printf("Addition of Even Range is:%d",iRet);
	return 0;
}