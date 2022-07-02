#include<stdio.h>
 void TimeTable(int iStd)
 {
	
	if(iStd==1)
	{
		printf("Ur exam is schedule at 11 am\n");
	}
	else if(iStd==2)
	{
		printf("Ur exam is schedule at 12 am\n");
	}
	else if(iStd==3)
	{
		printf("Ur exam is schedule at 1 pm\n");
	}
	else if(iStd==4)
	{
		printf("Ur exam is schedule at 2 pm\n");
	}
	else
	{
		printf("enter valid standard\n");
	}
 }
 
 int main()
 {
	int iValue=0;
	printf("Enter your Standard\n ");
	scanf("%d",&iValue);
	TimeTable(iValue);
	
	return 0;
	
	
 }