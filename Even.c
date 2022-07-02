/*
Check whether the given number is even or odd.
*/

#include<stdio.h>
#include<stdbool.h>

bool Even(int iNo)
{
	//int iNo=0;
	if(iNo%2==0)
	{
			return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	bRet=Even(iValue);
	if(bRet==true)
	{
		printf("The Number is Even\n");
	}
	else
	{
		printf("The Number is Odd\n");
	}
	
	return 0;
}