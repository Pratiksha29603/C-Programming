/*
****************************PROBLEMS ON File Manipulation**************************
						in C
STATEMENT: accept file name from user and read the size file
				
Input :  India is my country all Indians are  my  brothers
Output : 49 bytes
*************************************************************************************
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0, iRet=0,iSum=0;
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
		
			iSum=iSum+iRet;
		
	}
	
	printf("Total Number of a are:%d\n", iSum);
	close(fd);

	return 0;
}