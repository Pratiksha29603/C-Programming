/* Program to find out the area of circle */


#include<stdio.h>
const float pi=3.14;
int main()
{
	float area=1.0, radius=1.0;
	
	printf("Enter radius \n");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("\n The area of circle is %f", area);
	
	return 0;
}