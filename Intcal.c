/* Program to calculate the interest amount when interest is 11% per year */


#include<stdio.h>
#define int_rate 10
int main()
{
	float Principle=1.0, int_amt=1.0;
	int Period=1;
	
	printf("Enter principle amount and period ");
	scanf("%f%d",&Principle,&Period);
	int_amt=(Principle*int_rate/100)*Period;
	
	printf("The Interest amount is %f",int_amt);
	
	return 0;
}