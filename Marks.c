/* Accept Marks from user and  declare the result as pass class , second class , first class or distinction*/

#include<stdio.h>
int Marks(int iNo)
{
	if(iNo>0 && iNo<50)
	{
		printf("\nCandidate is fail..\n");
	}
	else if(iNo>=50 && iNo<=54)
	{
		printf("\nCandidate is passed in Pass Class");
	}
	else if(iNo>=55 && iNo<=59)
	{
		printf("\nCandidate is passed in Second Class");
	}
	else if(iNo>=60 && iNo<=69)
	{
		printf("\nCandidate is passed in First Class");
	}
	else if(iNo>=70 && iNo<=79)
	{
		printf("\nCandidate is passed in Distinction Class");
	}
	else if(iNo>=80 && iNo<=100)
	{
		printf("\nCandidate is passed in Merit Class");
	}
	else 
	{
		printf("\nEnter Valid Marks");
	}
	
}
int main()
{
 int iValue=0;
 int iRet=0;
 printf("Enter the Marks\n");
 scanf("%d",&iValue);
 iRet=Marks(iValue);
 return 0;
}

