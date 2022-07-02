/*
**********************PROBLEMS ON String ************************************
						in C
STATEMENT:  file create and print string in that existing file
				
Input :  
Output : 
**********************************************************************************
*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char Arr[]="Hello";
	fd= open("LB17.txt",O_RDWR | O_APPEND);
	
	if(fd==-1)
	{
		printf("Unable to open the file\n");
		
	}
	write(fd,Arr,5);
	
	close(fd);
	
	return 0;
	
}    