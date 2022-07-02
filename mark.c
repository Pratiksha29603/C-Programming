/* Program to caalculate marks of five subjects and find out the average */


#include<stdio.h>

int main()
{
	int m1=0,m2=0,m3=0,m4=0,m5=0,sum=0,avg=0;
	
	printf("Enter marks for five subjects:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	sum=m1+m2+m3+m4+m5;
	avg=sum/5;
	printf("Sum=%d\n Average=%d",sum,avg);
	
	return 0;
}