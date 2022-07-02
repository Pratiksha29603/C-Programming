/* Get input as a two numbers and show which is greater no*/

#include<stdio.h>
int Compare(int iNo1,int iNo2)
{
	if(iNo1>iNo2)
	{
		printf("Greatest Numbers is :%d\n",iNo1);
			
	}
	else
	{
		printf("Greatest Number is :%d\n",iNo2);
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	printf("Enter First No\n");
	scanf("%d",&iValue1);
	printf("Enter second No\n");
	scanf("%d",&iValue2);
	iRet= Compare(iValue1,iValue2);
	return 0;
	
}