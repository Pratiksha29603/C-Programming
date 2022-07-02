/*
**********************PROBLEMS ON FILE MANIPULATION************************************
						Assignment:41 (LB)
STATEMENT:  3. Write application which accept file name from user and read all data from that file
and display contents on screen.
Input : Demo.txt
Output : Display all data of file.
**********************************************************************************
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet=0;
    char Fname[30];
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
	
    fd = open(Fname,O_RDWR);
    
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File succesfully opened with FD : %d\n",fd);
    }
	
	
	
	iRet = write(fd,Data,22);
    
    printf("%d bytes gets succesfully written in the file\n",iRet);
	
	iRet = read(fd,Data,6);
    
    printf("%d bytes gets succesfully read friom file\n",iRet);
    
    printf("Data from the file is : %s\n",Data);
    
    return 0;
}


