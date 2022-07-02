/* Program to convert rupees into paisa  */


#include<stdio.h>

int main()
{
	float rupees=0.0;
	double paisa=0.0;
	
	
	printf("\n Enter Rupees:");
	scanf("%f",&rupees);
	paisa=rupees*100;
	printf("\n Rupees=%f \t Paisa=%lf",rupees,paisa);
	
	return 0;
}