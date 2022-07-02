/* 	*****************PROBLEMS ON STRING**************************
					Assignment :24 (LB)
STATEMENT:1.Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
e
Output : TRUE
Input : “Marvellous Multi OS”
W
Output : FALSE
**********************************************************************************
*/

#include<stdio.h>

int CountFrequency(char *str, char ch)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	
    while(*str != '\0')
    {
        if(*str==ch) 
        {
            iCnt++;
        }
		str++;
    }
    return iCnt;
}

int main()
{
	char arr[20];
	char cValue='\0';
	int iRet=0;
	
	printf("Enter string:\n");
	scanf("%[^'\n']s",arr);
	
	printf("Enter the character:\n");
	scanf(" %c",&cValue); //important to add space here
	
	iRet=CountFrequency(arr,cValue);
	printf("Frequency is:%d\n",iRet);
	
	return 0;
}