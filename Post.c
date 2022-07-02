/* Accept First Character from user and show his Post / Designation of user*/

#include<stdio.h>
int Post(char cNo)
{ 
	char code='\0';
	printf("Enter Post Code\n");
	scanf("%c",&code);
	
	if(code=='m')
	{
		printf("Post is Manager/n");
			
	}
	else if(code=='s')
	{
		printf("Post is Supervisor\n");
			
	}
	else if(code=='c')
	{
		printf("Post is Clark\n");
			
	}
	else if(code=='w')
	{
		printf("Post is worker\n");
			
	}
	else
	{
	 printf("Enter Valid Character");
	}
	
}

int main()
{
	char cValue1='\0';
	
	char cRet='\0';
	printf("\n\t Post/ Character");
	printf("\n\t Manager\t -m");
	printf("\n\t Supervisor\t -s");
	printf("\n\t Clerk\t -c");
	printf("\n\t Worker\t -w");
	cRet= Post(cValue1);
	return 0;
	
}