/* 	*****************PROBLEMS ON STRING**************************
					Assignment :26 (LB)
STATEMENT:5. Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.
Input : “Marvellous Python 2”
Output : “mARVELLOUS pYTHON 2”
**********************************************************************************
*/

#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
	// Fileter
	while(*src != '\0')
	{
		if((*src >='A') && (*src<= 'Z'))
        {
           printf("%c",*src+ 32);
        }
        else if((*src >='a') && (*src<= 'z'))
        {
           printf("%c",*src- 32);
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
	StrCpyToggle(arr,brr);
	
	return 0;
}