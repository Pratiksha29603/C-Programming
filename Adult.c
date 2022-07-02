/* Accept the age from user and display the person is adult or not */

#include<stdio.h>
int Age(int iNo1)
{
	if(iNo1>=18)
	{
		printf("Your are eligible for voting now...\n");
			
	}
	else
	{
		printf("your not eligible for voting now");
	}
}

int main()
{
	int iValue1=0;
	int iRet=0;
	printf("Enter  No\n");
	scanf("%d",&iValue1);
	
	iRet= Age(iValue1);
	return 0;
	
}