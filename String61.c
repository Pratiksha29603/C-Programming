/* 	*****************PROBLEMS ON STRING**************************
					Assignment :24 (LB)
STATEMENT:4.Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
M
Output : 11
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
	int index=-1;
    
    while(*str != '\0')
    {
        if(*str==ch) 
        {
			index=iCnt;
        }
		iCnt++;
        
    }
    return index;
}

int main()
{
    char Arr[20], cValue='\0';
    int iRet= 0;
    
    printf("Enter String: ");
    scanf("%[^'\n']s",Arr);
	
	printf("Enter the character:");
	scanf(" %c",&cValue); //important to add space here
    
    iRet=CountWhite(Arr,cValue);
    
    printf("%c is found at index %d.", cValue, iRet);
    
    return 0;
}