#include<stdio.h>
void Factor(int iValue)
{
	int iCnt=0;
	
	if(iValue<0)
	{
		iValue=-iValue;
	}
	
	for(iCnt=1;iCnt<iValue;iCnt++)//O(N)
	{
		if((iValue%iCnt)==0)
		{
			printf("%d\t",iCnt);
		}
	}
}
int main()
{
	int iNo=0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	Factor(iNo);
	return 0;
}