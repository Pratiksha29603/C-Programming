/*
**********************PROBLEMS ON FILE MANIPULATION************************************
						Assignment:42 (LB)
STATEMENT:  4. Write a program which accepts file name and one character from user and
count number of occurrences of that characters from that file.
Input : Demo.txt ‘M’
Output : Frequency of M is 7
**********************************************************************************
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0, iCnt=0, iRet=0,i=0;
	char fName[20];
	char Buffer[10];
	
	printf("Enter file name:\t");
	scanf("%s",fName);
	
	fd=open(fName,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open the file\n");
		return -1;
	}
	
	while((iRet=read(fd,Buffer,10))!=0)
	{
		for(i=0;i<iRet;i++)
		{
			if((Buffer[i]=='m')||(Buffer[i]=='M'))
			{
				iCnt++;
			}
		}
	}
	
	printf("Frequency of M is:%d\n", iCnt);
	close(fd);

	return 0;
}