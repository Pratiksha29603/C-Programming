/*
**********************PROBLEMS ON FILE MANIPULATION************************************
						Assignment:41 (LB)
STATEMENT:  4. Write application which accept file name from user and display size of file.
Input : Demo.txt
Output : File size is 56 bytes
**********************************************************************************
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0, iRet=0,iSum=0;
	char Fname[20];
	char Buffer[5];
	char Data[] = "Marvellous Infosystems";
	
    printf("Enter file name:\n");
    scanf("%s",Fname);
    fd = creat(Fname,0777);
	if(fd == -1)
    {
        printf("Unable to create the file\n");
    }
    else
    {
        printf("File succesfully created\n");
    }
	iRet = write(fd,Data,22);
    
    printf("%d bytes gets succesfully written in the file\n",iRet);

	fd=open(Fname,O_RDWR);
	
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

	
}