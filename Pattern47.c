#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
	static int iCnt=0;
	iCnt=iNo;
	if(iCnt!=0)
	{
		printf("%d*",iCnt);
		iCnt--;
		Display(iNo-1); //Recursive call
	}
	
}

int main()
{
	int iValue=0;
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}