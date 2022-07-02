/* 	*****************PROBLEMS ON STRING**************************
					Assignment :23 (LB)
STATEMENT:2.Write a program which accept string from user and convert it into
upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS
**********************************************************************************
*/

#include<stdio.h>


void struprx(char *str)
{
    
    
    while(*str != '\0')
    {
        if((*str >='a') && (*str<= 'z'))
        {
           printf("%c",*str - 32);
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
    
    struprx(Arr);
    printf("\n",struprx);
    return 0;
}