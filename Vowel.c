/* accept a character and show whether it is Vowel Or Consonent */

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Compare(char cNo)
{
	if(cNo=='a' || cNo=='e' || cNo=='i' || cNo=='o' || cNo=='u' ||
	   cNo=='A' || cNo=='E' || cNo=='I' || cNo=='O' || cNo=='U' )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}


int main()
{
	char cValue1='\0';
	BOOL bRet=FALSE;
	printf("Enter First No\n");
	scanf("%c",&cValue1);
	
	bRet= Compare(cValue1);
		if(bRet==TRUE)
	     {
			printf(" %c Character is Vowel \n",cValue1);
		}
		else
		{
			printf("%c Character is Consonent",cValue1);
		}
	return 0;
	
}