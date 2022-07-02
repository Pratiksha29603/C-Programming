/* Program to calculate the total sales and commission for the sales man as 7% of sales */


#include<stdio.h>
const float cfcomm=7.0;

int main()
{
	float ftot_sale=1.0, fcomm_amt=1.0,frate=1.0;
	int iqty=1;
	
	
	printf("Enter the quantity and item rate:");
	scanf("%d%f,&iqty,&frate");
	ftot_sale=iqty*frate;
	fcomm_amt=ftot_sale*cfcomm/100;
	
	printf("\n Items=%d\t rate=%f\t Total sales=%f Commision=%f",iqty,frate,ftot_sale,fcomm_amt);
	
	return 0;
}