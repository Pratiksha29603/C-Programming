
/*             *******  Problems on Number  *******

Statement: 1.Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.6224

*/
#include<stdio.h>
float Area(float);

int main()
{
      float fRadius=0.0, fRet=0.0;
      printf("Enter Radius: ");
      scanf("%f",&fRadius);
	  fRet=Area(fRadius);
	  printf("Result is:%f",fRet);
	  return 0;
}
float Area (float Radius)
{
 
float Area=0,Pi=3.14;
Area=Pi*Radius*Radius;
return Area;
}