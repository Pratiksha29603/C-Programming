/* Accept 3 Number from user and find out the largest number */

#include<stdio.h>
int Large(int iNo1 ,int iNo2,int iNo3)
{
	if(iNo1>iNo2 && iNo1>iNo3)
	{
		printf("Greatest number is %d \n",iNo1, &iNo1);
			
	}
	else if(iNo2>iNo1 && iNo2>iNo3)
	{
		printf("Greatest Number is %d \n",iNo2, &iNo2);
	}
	else if(iNo3>iNo1 && iNo3>iNo2)
	{
		printf("Greatest Number is %d",iNo3, &iNo3);
	}
}

int main()
{
	int iValue1=0, iValue2=0, iValue3=0;
	int iRet=0;
	printf("Enter  No\n");
	scanf("%d \n %d\n %d",&iValue1 ,&iValue2,&iValue3);
	
	iRet= Large(iValue1, iValue2, iValue3);
	return 0;
	
}