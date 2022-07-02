/* 	*****************PROBLEMS ON Recursion**************************
					
STATEMENT: Recursion
Input: Base=2, Power=3
Output:8
**********************************************************************************
*/

#include<stdio.h>

int PowerIW(int x, int y) //while loop
{
	int iMult=1;
	while(y!=0)
	{
		iMult=iMult*x;
		y--;
	}
	return iMult;
}

int PowerR(int x, int y)
{
	static int iMult=1;
	if(y!=0)
	{
		iMult=iMult*x;
		y--;
		PowerR(x,y); // Recursive call
	}
	return iMult;
}


int PowerIF(int x, int y)//for loop
{
	int iMult=1, i=0;
	for(i=1;i<=y;i++)
	{
		iMult=iMult*x;
		
	}
	return iMult;
}


int main()
{
	int iNo1=0, iNo2=0, iRet=0;
	
	printf("Enter Base\n");
	scanf("%d",&iNo1);
	
	printf("Enter Power\n");
	scanf("%d",&iNo2);
	
	iRet=PowerIW(iNo1, iNo2);
	printf("Result (while loop) is:%d\n", iRet);
	
	iRet=PowerIF(iNo1, iNo2);
	printf("Result (For loop) is:%d\n", iRet);
	
	iRet=PowerR(iNo1, iNo2);
	printf("Result (Recursion) is:%d\n", iRet);
	return 0;
}