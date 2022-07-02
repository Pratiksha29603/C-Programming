/* 	*****************PROBLEMS ON STRING**************************

STATEMENT: Accept string  
Input : 
Output : 
**********************************************************************************
*/

#include<stdio.h>

int main()
{
	char Arr[11]="Marvellous";
	printf("%s\n",&Arr[0]); //M
	printf("%s\n",&Arr[5]); //l
	printf("%s\n",&Arr[9]); //s
	printf("%s\n",Arr);
	printf("%s\n",Arr+5); 
	printf("%s\n",Arr+9); 

	return 0;
}