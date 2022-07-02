/* 	*****************PROBLEMS ON STRING**************************
					Assignment :22 (LB)
STATEMENT:5. Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM”
**********************************************************************************
*/

#include<stdio.h>

void RevString(char *str)
{
	int i=0,iLength=0;
	char strlen='\0';
	iLength=strlen(str);
	for(i=iLength-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
		
}
int main()
{
	char arr[20];
	
	printf("Enter string:");
	scanf("%[^’\n’]s",arr);
	RevString(arr);
	
	return 0;

}