/* 	*****************PROBLEMS ON STRING**************************
					Assignment :24 (LB)
STATEMENT:3.Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 0
Input : “Marvellous Multi OS”
W
Output : -1
Input : “Marvellous Multi OS”
e
Output : 4
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
			return iCnt;
            iCnt++;
			str++;
        }
        
    }
    return -1;
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
    
    if(iRet == -1)
	{
        printf("'%c' not found.",cValue);
	}
    else
	{
        printf("'%c' is found at index %d.", cValue, iRet);
	}
    
    return 0;
}