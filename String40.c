/* 	*****************PROBLEMS ON STRING**************************
					Assignment :23 (LB)
STATEMENT:3.Write a program which accept string from user and toggle the case.
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os
**********************************************************************************
*/

#include<stdio.h>


void strTogglex(char *str)
{
    
    
    while(*str != '\0')
    {
        if((*str >='a') && (*str<= 'z'))
        {
           printf("%c",*str - 32);
        }
        else if((*str >='A') && (*str<= 'Z'))
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
    
    strTogglex(Arr);
    printf("\n",strTogglex);
    return 0;
}