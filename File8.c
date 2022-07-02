/*
**********************PROBLEMS ON FILE MANIPULATION************************************
						Assignment:42 (LB)
STATEMENT:  2. Write a program which accepts file name from user and count number of
small characters from that file.
Input : Demo.txt
Output : Number of small characters are 21
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
			if(Buffer[i]==' ')
			{
				iCnt++;
			}
		}
	}
	
	printf("Total Number of white Spaces are:%d\n", iCnt);
	close(fd);

	return 0;
	
}    