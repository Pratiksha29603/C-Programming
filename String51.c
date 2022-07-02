/* 	*****************PROBLEMS ON STRING**************************
					Assignment :26 (LB)
STATEMENT:3. Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.
Input : “Marvellous Python 2”
Output : “MARVELLOUS PYTHON 2”
**********************************************************************************
*/

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
	// Fileter
	while(*src != '\0')
	{
		if((*src >='a') && (*src<= 'z'))
        {
           printf("%c",*src- 32);
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
	StrCpyCap(arr,brr);
	
	return 0;
}