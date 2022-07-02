/* Program to convert fehrenheit temperature to celsius */


#include<stdio.h>

int main()
{
	float ftemp=1.0, celtemp=1.0;
	
	printf("Enter the Temperature in fehrenheit \n");
	scanf("%f",ftemp);
	celtemp=(ftemp-32)/1.8;
	printf("\nThe Temperature in celsius is %f",celtemp);
	
	return 0;
}