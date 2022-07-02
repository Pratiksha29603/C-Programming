/* 	*****************PROBLEMS ON STRING**************************
					Assignment :24 (LB)
STATEMENT:2.Write a program which accept string from user and accept one
character. Return frequency of that character.
Input : “Marvellous Multi OS”
M
Output : 2
Input : “Marvellous Multi OS”
W
Output : 0
**********************************************************************************
*/

#include<stdio.h>
int CountWhite(char *str, char ch)
{
    int iCnt= 0;
    
    while(*str != '\0')
    {
        if(*str ==ch) 
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20], cValue='\0';
    int iRet= 0;
    
    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);
	
	printf("Enter the character:\n");
	scanf(" %c",&cValue); //important to add space here
    
    iRet = CountWhite(Arr, cValue);
    
    printf("frequency is: %d",iRet);
    
    return 0;
}