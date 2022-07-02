#include<stdio.h>
/*#define TAX_RATE1 0.05 
#define TAX_RATE2 0.10
#define TAX_RATE3 0.15
#define TAX_RATE4 0.20
#define TAX_RATE5 0.25
#define TAX_RATE6 0.30*/ 
 
 void IncomeTax(unsigned long int income)
 
 {
	int tax=0;
	
	//iSalary=iTaxAmt-250000;
	if(income>250000)
	
	{
		if(income=250001&&income<500000)
		{
			tax=(income-25001)*5/100;
			printf("You have to pay Tax: %d \n",tax);
		}
		else if(income>=500001&&income<750000)
		{
			tax=(income-50001)*10/100;
			printf("You have to pay Tax: %d \n",tax);
		}
		else if(income>=750001&&income<1000000)
		{
			tax=(income-75001)*15/100;
			printf("You have to pay Tax: %d \n",tax);
		}
		else if(income>=1000001&&income<1250000)
		{
			tax=(income-100001)*20/100;
			printf("You have to pay Tax: %d \n",tax);
		}
		else if(income>=1250001&&income<1500000)
		{
			tax=(income-125001)*25/100;
			printf("You have to pay Tax: %d\n",tax);
		}
		else 
		{
			tax=(income-150001)*30/100;
			printf("You have to pay Tax: %d\n",tax);
		}
	}
	else
	{
		printf("No Need to pay Tax \n");
	}
 }
 
 int main()
 {
	unsigned long int iValue=0;
	printf("Enter your Amount ");
	scanf("%d",&iValue);
	IncomeTax(iValue);
	
	return 0;
	
	
 }