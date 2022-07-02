/* 	*****************PROBLEMS ON STRING**************************
					Assignment :25 (LB)
STATEMENT:2. Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input : “Marvellous Multi OS”
10
Output : “Marvellous
Note : If third parameter is greater than the size of source string then
copy whole string into destination.
**********************************************************************************
*/

#include<stdio.h>

void StrCpyX(char *src, char *dest, int iCnt)
{
	if(iCnt<*src)
	{
			*dest = *src;
			src++; 
			dest++;
	}
	*dest='\0';

	while((*src != '\0') && (iCnt != 0) )
	{
		*dest = *src;
		src++; 
		dest++;
		iCnt--;
	}
		 *dest='\0';
}
int main()
{
	int iValue=10;
	char arr[30] = "Marvellous Multi OS";
	char brr[30]; // Empty string
	StrCpyX(arr,brr,iValue);
	printf("\n copied string is:\t%s",brr); // Marvellous Multi OS
	return 0;
}