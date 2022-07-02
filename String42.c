/* 	*****************PROBLEMS ON STRING**************************
					Assignment :23 (LB)
STATEMENT:5. Write a program which accept string from user and count number of
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5
**********************************************************************************
*/

#include<stdio.h>


int CountWhite(char *str)
{
    int iCnt= 0;
    
    while(*str != '\0')
    {
        if(*str == ' ') 
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet= 0;
    
    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountWhite(Arr);
    
    printf("number of white spaces is: %d",iRet);
    
    return 0;
}