/* Program to find out the area and perimeter of rectangle */


#include<stdio.h>

int main()
{
	float length=1.0, breadth=1.0,area=1.0,perimeter=0.0;
	
	printf("Enter the lenght and breadth");
	scanf("%f\n%f",&length,&breadth);
	area=length*breadth;
	perimeter=(2*length)+(2*breadth);
	printf("The area of rectangle is %f\n Perimeter is %f",area,perimeter);
	
	return 0;
}