/* 	*****************PROBLEMS ON STRING**************************
					Assignment :22 (LB)
STATEMENT:4. Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
**********************************************************************************
*/

#include<stdio.h>
#include<stdbool.h>
bool ChkVowel(char *str)
{

	while(*str!='\0')
	{
		if((*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U')||
		   (*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
		{
			return true;
		}
		str++;
	}
		return false;
}
		

int main()
{
	
	char arr[20];
	bool bRet = false;
	printf("Enter string:");
	scanf("%[^’\n’]s",arr);
	bRet=ChkVowel(arr);
	if(bRet==true)
	{
		printf("Contains Vowel");
	}
	else
	{
		printf("There is no Vowel");
	}
	return 0;

}