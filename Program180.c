/*
*******************************PROBLEMS ON File Manipulation ******************************
						in C
STATEMENT: accept file name from user and read digit as character from file
				
Input :  Marvellous@123Demo11
Output : 5
****************************************************************************************
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
			if((Buffer[i]>='0')&&(Buffer[i]<='9'))
			{
				iCnt++;
			}
		}
	}
	
	printf("Total Number of a are:%d\n", iCnt);
	close(fd);

	return 0;
}