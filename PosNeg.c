/* check whether the number is positive or negative*/

#include<stdio.h>
int PosNeg(int iNo1)
{
	if(iNo1>0)
	{
		printf(" Numbers is Positive :%d\n",iNo1);
			
	}
	else
	{
		printf(" Number is Negative :%d\n",iNo1);
	}
}

int main()
{
	signed int iValue1=0;
	int iRet=0;
	printf("Enter First No\n");
	scanf("%d",&iValue1);
	
	iRet= PosNeg(iValue1);
	return 0;
	
}