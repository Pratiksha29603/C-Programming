/* Program to calculate Employee salary

	Gross Salary=gsal
	Housing rent allowance=hra
	dearness allowance=da
	travelling allowance=ta
	professional tax=pt
	Netsalary=netsal
*/


#include<stdio.h>

int main()
{
	float hra=0.0,da=0.0,ta=0.0,gsal=0.0,netsal=0.0,pt=0.0;
	int basic=0;
	
	
	printf("Enter Basic salary");
	scanf("%d",&basic);
	hra=(50*basic)/100;
	da=(25*basic)/100;
	ta=(5*basic)/100;
	gsal=basic+hra+da+ta;
	netsal=gsal-pt;
	printf("\n HRA=%f \t DA=%f \t TA=%f",hra,da,ta);
	
	printf("\n Gross Salary=%f \t Net Salary=%f",gsal,netsal);
	
	return 0;
}