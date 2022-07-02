/*
**********************PROBLEMS ON FILE MANIPULATION************************************
						Assignment:42 (LB)
STATEMENT: 5. Write a program which accepts file name and one count from user and read
that number of characters from starting position.
Input : Demo.txt 12
Output : Display first 12 characters from Demo.txt
**********************************************************************************
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char fName[20];
	char Arr[10];
	
	printf("Enter file name:\t");
	scanf("%s",fName);
	
	fd = open(fName, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    
    // 0    From starting position
    // 1    From Current position
    // 2    From end of the file
    
    lseek(fd,5,0);
    
    read(fd,Arr,5);
    
    printf("Data from file is : ");
    
    write(1,Arr,5);
    
    printf("\n");
    
    close(fd);
    
    return 0;
}