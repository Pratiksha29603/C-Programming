/*
**********************PROBLEMS ON String ************************************
						in C
STATEMENT:  file create and read 5 letters in that in that existing file
				
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
	char Arr[10];
	fd= open("LB17.txt",O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open the file\n");
		
	}
	read(fd,Arr,5);
	
	printf("Data from file is:\t");
	
	write(1,Arr,5);
	close(fd);
	
	return 0;
	
}    