/* accept year from user and show whether it is leap year or not */

#include<stdio.h>
int LeapYear(int iNo1)
{
	if(iNo1%4==0)
	{
		printf("Year is Leap Year :%d\n",iNo1);
			
	}
	else
	{
		printf("year is Not Leap Year :%d\n",iNo1);
	}
}

int main()
{
	int iValue1=0;
	int iRet=0;
	printf("Enter Year\n");
	scanf("%d",&iValue1);
	
	iRet= LeapYear(iValue1);
	return 0;
	
}
