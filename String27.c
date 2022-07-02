/* 	*****************PROBLEMS ON STRING**************************

STATEMENT:5. Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
**********************************************************************************
*/

#include<stdio.h>

void CheckSmall(char c)
{
	
	if((c=='A')||(c=='a'))
	{
		printf("Your exam at 7 AM");
	}
	else if((c=='B')||(c=='b'))
	{
		printf("Your exam at 8:30 AM");
	}
	else if((c=='C')||(c=='c'))
	{
		printf("Your exam at 9:20 AM");
	}
	else if((c=='D')||(c=='d'))
	{
		printf("Your exam at 10:30 AM");
	}
}
		

int main()
{
	
	char ch='\0';
	
	printf("Enter Character \n");
	scanf("%c",&ch);
	CheckSmall(ch);
	
	return 0;
}