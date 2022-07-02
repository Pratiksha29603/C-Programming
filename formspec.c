/* Program to demonstrate all possible format specifiers */


#include<stdio.h>

int main()
{
	int ac_no;
	float interest=0.0;
	char ac_type;
	char name[20];
	double deposit;
	
	printf("\n Enter account number and Member name");
	scanf("%d\n %s",&ac_no,&name);
	printf("Enter deposit and interest");
	scanf("%lf %f",&deposit,&interest);
	printf("A/C No:%d \n Name- %s \n Deposite-%lf \n Interest %f",ac_no, name,deposit,interest);
	
	return 0;
}