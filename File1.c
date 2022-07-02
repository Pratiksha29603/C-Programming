/*
**********************PROBLEMS ON FILE MANIPULATION************************************
						Assignment:41 (LB)
						
STATEMENT:  1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully.
**********************************************************************************
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[30];
    
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
    
    return 0;
}
