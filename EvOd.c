/* Take number as input and display it is even or not */

#include<stdio.h>
int EvOd(int iNo1)
{
	if((iNo1%2)==0)
	{
		printf("Numbers is Even :%d\n",iNo1);
			
	}
	else
	{
		printf(" Number is Odd :%d\n",iNo1);
	}
}

int main()
{
	int iValue1=0;
	int iRet=0;
	printf("Enter First No\n");
	scanf("%d",&iValue1);
	
	iRet= EvOd(iValue1);
	return 0;
	
}