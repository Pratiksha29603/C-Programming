/*
**********************PROBLEMS ON FILE MANIPULATION************************************
						Assignment:41 (LB)
STATEMENT:  5. Write application which accept file name from user and one string from user. Write
that string at the end of file.
Input : Demo.txt
Hello World
Output : Write Hello World at the end of Demo.txt file
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
	char Arr[]="Hello";
	printf("Enter file name:\t");
	scanf("%s",fName);
	fd = open(fName, O_RDWR | O_APPEND);
	
	if(fd==-1)
	{
		printf("Unable to open the file\n");
		
	}
	write(fd,Arr,5);
	
	close(fd);
	
	return 0;
	
}    