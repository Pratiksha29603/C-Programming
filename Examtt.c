#include<stdio.h>
void TimeTable(int iStd)
{
switch(iStd)
{
	case 1:
	printf("ur Exam at 11 am\n");
	break;
	
	case 2:
	printf("ur Exam at 12 am\n");
	break;
	
	case 3:
	printf("ur Exam at 1 pm\n");
	break;
	
	case 4:
	printf("ur Exam at 2 pm\n");
	break;
	
	default:
	printf("wrong input\n");
}	
}
 
  int main()
  {
	int iValue=0;
	printf("Enter your Standard\n ");
	scanf("%d",&iValue);
	TimeTable(iValue);
	
	return 0;
  }