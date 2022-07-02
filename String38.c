/* 	*****************PROBLEMS ON STRING**************************
					Assignment :23 (LB)
STATEMENT:1.Write a program which accept string from user and convert it into
lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os
**********************************************************************************
*/

#include<stdio.h>


void strlwrx(char *str)
{
    
    
    while(*str != '\0')
    {
        if((*str >='A') && (*str<= 'Z'))
        {
           printf("%c",*str + 32);
        }
        else
        {
           printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    
    printf("Enter String:\n ");
    scanf("%[^'\n']s",Arr);
    
    strlwrx(Arr);
    printf("Modified string is :\n",strlwrx);
    return 0;
}