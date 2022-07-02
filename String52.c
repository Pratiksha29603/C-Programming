/* 	*****************PROBLEMS ON STRING**************************
					Assignment :26 (LB)
STATEMENT:4. Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.
Input : “Marvellous Python 2”
Output : “marvellous python 2”
**********************************************************************************
*/

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
	// Fileter
	while(*src != '\0')
	{
		if((*src >='A') && (*src<= 'Z'))
        {
           printf("%c",*src+ 32);
        }
        else
        {
           printf("%c",*src);
        }
        *dest = *src;
		src++; 
		dest++;
	}
	*dest='\0';
}
int main()
{
	
	char arr[30] = "Marvellous Multi OS";
	char brr[30]; // Empty string
	StrCpySmall(arr,brr);
	
	return 0;
}