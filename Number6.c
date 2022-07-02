
/*             *******  Problems on Number  *******

Statement: Write a program which accept temperature in Fahrenheit and convert it into
celsius. (1 celsius = (Fahrenheit -32) * (5/9))
Input : 10
Output : -12.2222 (10 - 32) * (5/9)
Input : 34
Output : 1.11111 (34 - 32) * (5/9)

*/
#include<stdio.h>
float FhtoCs(float);
int main()
{
	float fValue = 1.0, dRet = 1.0;
	printf("Enter temperature in Fahrenheit:");
	scanf("%f",&fValue);
	dRet = FhtoCs(fValue);
	printf("Fahrenheit :%.2f",dRet);
	return 0;
}
float FhtoCs(float fTemp)
{
	float fCelsius=1.0;
	fCelsius =(5.0/9)*(fTemp-32);
	return fCelsius;
	
}