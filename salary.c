/* Program to calculate  salary

	Gross Salary=gross
	Housing rent allowance=hra
	dearness allowance=da
	travelling allowance=ta
	
*/


#include<stdio.h>

int main()
{
	int hra=1,da=1,ta=1,gross=1;
	int basic=0;
	
	
	printf("Enter Basic salary");
	scanf("%d",&basic);
	
	da=(5*basic)/100;
	hra=(15*basic)/100;
	ta=(5*basic)/100;
	gross=basic+hra+da;
	
	printf("\n HRA=%d \t DA=%d \t Gross=%d",hra,da,gross);
	
	
	
	return 0;
}